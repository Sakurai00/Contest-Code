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
    int a, b; cin >> a >> b;
    char x[100], y[100];
    for (int i = 0; i < b; i++) {
        x[i] = '0' + a;
    }
    x[b] = '\0';
    for (int i = 0; i < a; i++) {
        y[i] = '0' + b;
    }
    y[a] = '\0';
    if (a < b) cout << x << endl;
    else cout << y << endl;
    return 0;
}