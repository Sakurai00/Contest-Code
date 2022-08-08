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
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    rep(i, n - 2) {
        char temp[4] = {s[i], s[i + 1], s[i + 2]};
        if (strcmp("ABC", temp) == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}