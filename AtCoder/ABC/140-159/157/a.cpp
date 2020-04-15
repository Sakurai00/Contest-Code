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
    int n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << endl;
    else cout << n / 2 + 1 << endl;
    return 0;
}