#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n; cin >> n;
    vint x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    double ans = 0;

    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++) {
            ans += sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
        }
    }
    ans = ans * 2 / n;

    printf("%.10f\n", ans);
}