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
    llint n, k;
    cin >> n >> k;
    vint h(n);
    llint sum = 0;
    rep(i, n) {
        cin >> h[i];
        sum += h[i];
    }
    sort(h.begin(), h.end());
    if (k != 0) {
        for (int i = 0; i < k; i++) {
            if (sum <= 0) break;
            llint last = h.back();
            sum -= last;
            h.pop_back();
        }
    } else {
        cout << sum << endl;
        return 0;
    }

    if (sum <= 0) cout << 0 << endl;
    else cout << sum << endl;

    return 0;
}