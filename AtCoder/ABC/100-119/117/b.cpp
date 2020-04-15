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
    vint l(n);
    rep(i, n) cin >> l[i];
    sort(all(l));
    int max = l[n - 1];
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += l[i];
    }
    if (max >= sum) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}