#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n, ans = 0; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> b(n);
    rep(i, n) cin >> b[i];
    vector<int> c(n - 1);
    rep(i, n - 1) cin >> c[i];
    rep(i, n) a[i]--;

    rep(i, n) {
        ans += b[a[i]];
    }

    rep(i, n - 1) {
        if (a[i] + 1 == a[i + 1]) {
            ans += c[a[i]];
        }
    }
    cout << ans << endl;
    return 0;
}