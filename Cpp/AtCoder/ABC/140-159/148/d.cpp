#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const llint INF = 1e9;
const llint llINF = 1e18;

int main () {
    int n; cin >> n;
    vint a(n);
    rep(i, n) cin >> a[i];
    int next = 1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == next) {
            next++;
        } else {
            ans++;
        }
    }
    if (ans == n) ans = -1;
    cout << ans << endl;
    return 0;
}