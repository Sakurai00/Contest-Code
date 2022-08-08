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
    llint n, a, b; cin >> n >> a >> b;
    llint ab = a + b;
    llint ans = 0;
    if (n > ab) {
        llint kaisuu = n / (ab);
        llint nokori = n - ((ab) * kaisuu);
        if (nokori <= a) {
            ans += a * kaisuu + nokori;
        } else {
            ans += a * kaisuu + a;
        }
        cout << ans << endl;
        return 0;
    } else if (a == 0) {
        cout << "0" << endl;
        return 0;
    } else if (n <= ab) {
        if (n - a >= 0) {
            cout << a << endl;
            return 0;
        } else {
            cout << n << endl;
            return 0;
        }
    }

    return 0;
}