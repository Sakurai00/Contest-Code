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
int gcd(int x,int y){return y?gcd(y,x%y):x;}
int lcm(int x,int y){return x*y/gcd(x,y);}

int main () {
    double a, b; cin >> a >> b;
    double ans = INF;
    bool can = false;
    double tempa = a, tempb = b;

    for (int i = 0; i < 10; i++) {
        if (i == 0) tempa = a;
        double x = tempa / 0.08;

        for (int j = 0; j < 10; j++) {
            if (j == 0) tempb = b;
            double y = tempb / 0.1;
            cerr << tempa << " " << tempb << endl;
            cerr << x << " " << y << endl;
            cerr << endl;
            if (floor(x) == floor(y)) {
                can = true;
                ans = min(x, ans);
            }
            tempb+=0.1;

        }
        tempa+=0.1;
    }

    if (can) cout << ans << endl;
    else cout << "-1" << endl;
    return 0;
}