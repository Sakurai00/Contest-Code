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
    int n, x; cin >> n >> x;
    vint d(n + 1);
    d[0] = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        d[i + 1] = d[i] + a;
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] <= x) ans++;
    }
    cout << ans << endl;
    return 0;
}