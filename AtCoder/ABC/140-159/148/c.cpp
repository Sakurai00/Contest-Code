#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;


llint gcd (llint x, llint y) {
    if (x % y == 0) return y;
    else return gcd(y, x % y);
}


llint lcm (llint x, llint y) {
    return x * y / gcd(x, y);
}


int main () {
    llint a, b; cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}