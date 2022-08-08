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
    int n, m, t;
    cin >> n >> m >> t;
    vint a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];

    int x = n, now = 0;
    for (int i = 0; i < m; i++) {
        x -= a[i] - now;
        now = a[i];
        if (x <= 0) {
            cout << "No" << endl;
            return 0;
        }
        x += b[i] - a[i];
        if (x > n) x = n;
        now = b[i];
    }
    x -= t - now;

    if (x <= 0) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}