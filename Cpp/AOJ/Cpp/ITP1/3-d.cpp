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
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    for(int i = a; i <= b; i++) {
        if (c % i == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}