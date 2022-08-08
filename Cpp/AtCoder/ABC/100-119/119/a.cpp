#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const llint INF = 1e9;
const llint llINF = 1e18;

int main () {
    int y, m, d;
    char a, b;
    cin >> y >> a >> m >> b >> d;
    cout << (m <= 4 ? "Heisei" : "TBD") << endl;
    return 0;
}