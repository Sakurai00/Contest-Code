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
    llint a, b, k;
    cin >> a >> b >> k;
    if (k <= a) {
        cout << a - k << " " << b << endl;
    } else if (k < a + b) {
        cout << 0 << " " << b - (k - a) << endl;
    } else {
        cout << 0 << " "  << 0 << endl;
    }
    return 0;
}