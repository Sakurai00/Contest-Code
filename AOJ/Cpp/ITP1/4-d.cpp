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
    int n; cin >> n;
    int mi = INF, ma = -INF;
    llint sum = 0;
    vint a(n);
    rep(i, n) {
        cin >> a[i];
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
        sum += a[i];
    }
    printf("%d %d %lld\n", mi, ma, sum);
    return 0;
}