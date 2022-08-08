#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n, k, ans = 1; cin >> n >> k;
    rep (i, n) {
        if (ans * 2 < ans + k) ans *= 2;
        else ans += k;
    }
    cout << ans << endl;
}