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
    int n, m;
    cin >> n >> m;
    vvint a(n, vint(m));
    vint b(m);
    rep(i, n) {
        rep(j, m) cin >> a[i][j];
    }
    rep(i, m) cin >> b[i];

    vint c(n, 0);

    rep(i, n) {
        rep(j, m) {
            c[i] += a[i][j] * b[j];
        }
    }

    rep(i, n) {
        printf("%d\n", c[i]);
    }

    return 0;
}