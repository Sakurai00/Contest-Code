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
const int MOD = 1e9 + 7;
const long long llINF = 1e18;
#pragma endregion

int main () {
    int a, b; cin >> a >> b;
    int ans = INF;
    bool can = false;
    for (int i = 1; i <= 1000; i++) {
        double x = i * 0.08;
        double y = i * 0.10;
        if (floor(x) == a && floor(y) == b) {
            can = true;
            ans = min(ans, i);
        }
    }

    if (can) cout << ans << endl;
    else cout << "-1" << endl;
    return 0;
}