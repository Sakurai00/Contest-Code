#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n, ans = 0; cin >> n;
    vint l(n), r(n);
    rep (i, n) {
        cin >> l[i] >> r[i];
        ans += r[i] - l[i] + 1;
    }
    cout << ans << endl;
}