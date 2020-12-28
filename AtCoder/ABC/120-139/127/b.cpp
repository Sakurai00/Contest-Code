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
    int r, d, x2000;
    cin >> r >> d >> x2000;
    int out = x2000;
    for (int i = 1; i < 11; i++) {
        out = r * out - d;
        cout << out << endl;
    }
    return 0;
}