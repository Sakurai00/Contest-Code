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
    int n, m, c;
    cin >> n >> m >> c;
    vint b(m);
    rep(i, m) cin >> b[i];
    vvint a(n, vint(m));
    rep(i, n) {
        rep(j, m) cin >> a[i][j];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = c;
        for (int j = 0; j < m; j++) {
            sum += a[i][j] * b[j];
        }
        if (sum > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}