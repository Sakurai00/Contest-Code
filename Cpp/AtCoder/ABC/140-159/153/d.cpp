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
    llint h; cin >> h;
    llint ans = 1;
    while (h > 0) {
        h = floor(h / 2);
        ans *= 2;
    }

    cout << ans - 1<< endl;
    return 0;
}