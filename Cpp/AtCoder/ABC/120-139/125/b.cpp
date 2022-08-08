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
    int n; cin >> n;
    vint v(n), c(n);
    rep(i, n) cin >> v[i];
    rep(i, n) cin >> c[i];
    vint cost(n);
    rep(i, n) {
        cost[i] = v[i] - c[i];
        //cout << cost[i];
    }
    sort(all(cost));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (cost[i] < 0) continue;
        else ans += cost[i];
    }

    cout << ans << endl;
    return 0;
}
