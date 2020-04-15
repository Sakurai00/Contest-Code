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
    int n; cin >> n;
    vint a(n);
    rep(i, n) cin >> a[i];
    int ans = 0, gu = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            gu++;
            if (a[i] % 3 == 0 || a[i] % 5 == 0) {
                ans++;
            } else {
                break;
            }
        }
    }

    if(ans == gu) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
    return 0;
}