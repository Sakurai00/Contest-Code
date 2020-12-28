#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    int a, b, c, z;
    cin >> a >> b >> c;
    z = a + b + c;
    if (z >= 22) cout << "bust" << endl;
    else if (z <= 21) cout << "win" << endl;
    return 0;
}