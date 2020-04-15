#define _GLIBCXX_DEBUG
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
    vint h(n);
    rep(i, n) cin >> h[i];
    reverse(all(h));
    int ans = 0, temp = 0;
    for (int i = 1; i < n; i++) {
        if (h[i - 1] <= h[i]) temp++;
        else temp = 0;
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}