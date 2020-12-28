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
    vector<pair<int, int>> xl(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xl[i] = make_pair(x, y);
    }
    sort(all(xl));
    vint ans(n, 1);
    bool check = false;
    for (int i = 0; i < n; i++) {
        if ((xl[i+1].first - xl[i+1].second) - (xl[i].first + xl[i].second) < 0 && check == false) {
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