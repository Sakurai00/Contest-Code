#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    int n, x, y, z; cin >> n >> x >> y >> z;
    vint a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= x && b[i] >= y && a[i]+b[i] >= z) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}