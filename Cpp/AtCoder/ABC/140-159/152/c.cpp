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
    vint p(n), q(n);
    rep(i, n) {
        cin >> p[i];
    }
    q = p;
    int count = 0, ans = 0;
    sort(all(q));
    if (q == p) {
        cout << "1" << endl;
        return 0;
    }
    sort(all(q), greater<int>());
    if (q == p) {
        cout << n << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (p[i] <= p[j]) {
                count++;
            } else {
                break;
            }
        }
        if (count == i + 1) ans++;
        count = 0;
    }
    cout << ans << endl;
    return 0;
}