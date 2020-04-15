#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n; cin >> n;
    int ans = 0;
    vector<int> d(n);
    rep(i, n) cin >> d[i];
    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++) {
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;
}