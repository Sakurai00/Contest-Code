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
    vint r(n);
    rep(i, n) cin >> r[i];
    int ma = -INF, mi = r[0];
    for (int i = 1; i < n; i++) {
        ma = max(ma, r[i] - mi);
        mi = min(mi, r[i]);
    }
    cout << ma << endl;
    return 0;
}