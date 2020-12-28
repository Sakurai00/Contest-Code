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
    vint x(n), l(n);
    rep(i, n) cin >> x[i] >> l[i];
    vint ans(n, 1);
    bool check = false;
    for (int i = 1; i < n; i++) {
        if ((x[i+1] - l[i+1]) - (x[i] + l[i]) <= 0) {
            ans[i + 1]--;
            check = true;
        } else if (check == true) {
            check = false;
            continue;
        }
    }
    int a = 0;
    rep(i, n) a += ans[i];
    cout << a << endl;
    return 0;
}