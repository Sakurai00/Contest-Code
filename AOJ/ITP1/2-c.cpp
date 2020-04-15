#pragma region def
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
using pint = pair<int, int>;
const int INF = 1e9;
const long long llINF = 1e18;
#pragma endregion

int main () {
    vint x(3);
    rep(i, 3) cin >> x[i];
    sort(all(x));
    printf("%d %d %d\n", x[0], x[1], x[2]);
    return 0;
}