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
    cout << fixed << setprecision(15);
    int n;
    cin >> n;
    vint x(n);
    double m = 0, u = 0, c = 0;
    rep(i, n) {
        cin >> x[i];
        x[i] = abs(x[i]);
        m += x[i];
        u += pow(x[i], 2);
        if (c < x[i]) c = x[i];
    }
    u = sqrt(u);

    cout << m << endl;
    cout << u << endl;
    cout << c << endl;
    return 0;
}