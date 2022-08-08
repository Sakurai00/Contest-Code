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
    int X[4][3][10], n, b, f, r, v;
    rep(i, 4) {
        rep(j, 3) {
            rep(k, 10) {
                X[i][j][k] = 0;
            }
        }
    }
    cin >> n;
    rep(i, n) {
        cin >> b >> f >> r >> v;
        X[b-1][f-1][r-1] += v;
    }

    rep(i, 4) {
        rep(j, 3) {
            rep(k, 10) {
                printf(" %d", X[i][j][k]);
            }
            printf("\n");
        }
        if (i != 3) printf("####################\n");
    }

    return 0;
}