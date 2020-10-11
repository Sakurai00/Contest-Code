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
    int x, y;
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x > y) swap(x, y);
        printf("%d %d\n", x, y);
    }
    return 0;
}