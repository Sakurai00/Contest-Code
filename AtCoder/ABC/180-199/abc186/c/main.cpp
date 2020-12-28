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


bool check_d(int n, int a) {
    while(n > 0) {
        if (n % a == 7) return false;
        n /= a;
    }
    return true;
}


int main () {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if(check_d(i, 8) && check_d(i, 10)) ans++;
    }
    cout << ans << endl;
    return 0;
}