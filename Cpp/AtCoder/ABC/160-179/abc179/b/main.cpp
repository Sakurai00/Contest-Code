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
    int n; cin >> n;
    int check = 0;
    bool ans = false;
    vvint d(n, vint(2));
    rep(i, n) {
        rep(j, 2) {
            cin >> d[i][j];
        }
        if (d[i][0] == d[i][1]) {
            check += 1;
        } else {
            check = 0;
        }
        if (check == 3) {
            ans = true;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}