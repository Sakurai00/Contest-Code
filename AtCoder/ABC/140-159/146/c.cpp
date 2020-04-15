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
    llint a, b, x;
    cin >> a >> b >> x;
    llint l = 0, r = INF + 1;
    auto keta = [&](llint c) {
        int res = 0;
        while (c) {
            c /= 10;
            res++;
        }
        return res;
    };
    auto f = [&](llint c) {
        return a*c + b*keta(c);
    };
    while (r - l > 1) {
        llint c = (l + r) / 2;
        if (f(c) <= x) l = c;
        else r = c;
    }
    cout << l << endl;
    return 0;
}