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
    vint p(n), q(n), a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
        b[i] = i + 1;
    }
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    int ax = 0, bx = 0;
    do {
        if (p == a) break;
        else ax++;
    } while (next_permutation(all(a)));

    do {
        if (q == b) break;
        else bx++;
    } while (next_permutation(all(b)));

    cout << abs(ax - bx) << endl;
    return 0;
}