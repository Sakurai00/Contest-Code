#pragma region def
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
using pint = pair<int, int>;
const int INF = 1e9;
const long long llINF = 1e18;
#pragma endregion

int main () {
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        for (int j = i; j < s.size(); j++) {
            char a = s[j];
            if (a=='A'||a=='C'||a=='G'||a=='T') {
                count++;
            } else {
                break;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}