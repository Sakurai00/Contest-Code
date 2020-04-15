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

    int ans = -INF;
    int ans_t = -INF;
    int memo[1000000];

int main () {
    int n, k; cin >> n >> k;
    vint p(n);
    rep(i, n) cin >> p[i];
    for (int i = 0; i < k; i++) {
        memo[0] += p[i];
    }
    cout << memo[0] << endl;
    for (int i = 1; i < n - k + 1; i++) {

        memo[i] = memo[i - 1] -  p[i - 1];
        memo[i] = memo[i - 1] +  p[i - 1 + k];

        if (memo[i] > ans) {
            ans = memo[i];
            ans_t = i;
        }
    }

    double output = 0;
    for (int i = 0; i < k; i++) {
        double x = ((p[ans_t + i] + 1) / 2.0);
        output += (double)x;

    }
    printf("%.9lf\n", output);
    return 0;
}