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
    llint n, a, b;
    cin >> n >> a >> b;
    llint sa = b - a;
    if (sa % 2 == 0) {
        cout << sa / 2 << endl;
    } else {
        cout << min(max(a - 1, b - 1), max(n - a, n - b)) << endl;
    }
    return 0;
}