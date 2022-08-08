#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a + b > c + d) cout << "Left\n";
    else if (a + b < c + d) cout << "Right\n";
    else cout << "Balanced\n";
}