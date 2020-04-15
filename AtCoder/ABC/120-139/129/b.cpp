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
    int s1, s2 = 0, ans = INF;
    vint w(n);
    rep(i,n) {
        cin >> w[i];
        s1 += w[i];
    }
    for (int i = 0; i < n; i++) {
        int min_temp;
        min_temp = abs(s1 - s2);
        ans = min(ans, min_temp);
        s1 -= w[i];
        s2 += w[i];
    }
    cout << ans << endl;
    return 0;
}