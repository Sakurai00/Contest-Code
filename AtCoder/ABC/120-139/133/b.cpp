#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    int n, d; cin >> n >> d;
    vvint x(n, vint(d));
    rep(i, n) {
        rep(j, d) {
            cin >> x[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++) {
            int norm = 0;
            for (int k = 0; k < d; k++) {
                int diff = abs(x[i][k] - x[j][k]);
                norm += diff * diff;
            }
            bool flag = false;
            for (int k = 0; k <= norm; k++) {
                if (k * k == norm) flag = true;
            }
            if (flag) ans++;
        }

    }
    cout << ans << endl;
    return 0;
}
