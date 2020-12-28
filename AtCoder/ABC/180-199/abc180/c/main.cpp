#pragma region def
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using pint = pair<int, int>;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long llINF = 1e18;
#pragma endregion

int main() {
    llint n;
    cin >> n;
    set<long> ans;
    for (llint i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans.insert(i);
            ans.insert(n / i);
        }
    }
    for (auto &&i : ans) {
        cout << i << endl;
    }

    return 0;
}