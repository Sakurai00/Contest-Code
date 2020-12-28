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
const int MOD = 1e9 + 7;
const long long llINF = 1e18;
#pragma endregion

int main () {
    string s; cin >> s;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int t, f;
        char c;
        cin >> t;
        if (t == 1) {
            reverse(all(s));
        }
        else if (t == 2) {
            cin >> f >> c;
            if (f == 1) {
                string temp = {c};
                cerr << temp << endl;
                s.insert(0, temp);
            } else if (f == 2) {
                s.push_back(c);
            }
        }
        cerr << i + 1 << " "<< s << endl;
    }

    cout << s << endl;
    return 0;
}