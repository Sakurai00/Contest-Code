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
    llint n;
    cin >> n;
    vector<llint> x(n + 1);
    llint m = 0;
    rep(i, n) {
        cin >> x[i + 1];
        m = max(m, x[i + 1]);
    }
    //m = max(m, n);
    //vector<llint> HP;
    llint ans = INF;

    for (llint P = 1; P <= m; P++) {
        //HP[P] = 0;
        llint needHP = 0;
        for (llint i = 1; i <= n; i++) {
            needHP += pow((x[i] - P), 2);
        }
        //HP.push_back(needHP);
        //ans = min(ans, HP[P]);
        ans = min(ans, needHP);
    }
    cout << ans << endl;

    return 0;
}