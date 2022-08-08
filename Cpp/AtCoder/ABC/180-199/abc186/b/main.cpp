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
    int h, w, m = INF;
    cin >> h >> w;
    vvint a(h, vint(w));
    rep(i, h) {
        rep(j, w) {
            cin >>a[i][j];
            m = min(m, a[i][j]);
        }
    }
    int ans = 0;
    rep(i, h) {
        rep(j, w) {
            ans += abs(a[i][j] - m);
        }
    }
    cout << ans << endl;
    return 0;
}