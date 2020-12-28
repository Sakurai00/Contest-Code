//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const int INF = 1e9;
const llint llINF = 1e18;

int main () {
    int n, k, m, p = 0;
    cin >> n >> k >> m;
    vint a(n);
    rep(i, n) {
        cin >> a.at(i);
        p += a.at(i);
    }

    int ans = 0;
    bool ok = false;

    while (ans <= k) {
        if (((p + ans) / n) >= m) {
            ok = true;
            break;
        } else {
            ans++;
        }
    }

    if(ok) cout << ans << endl;
    else cout << "-1" << endl;
    return 0;
}