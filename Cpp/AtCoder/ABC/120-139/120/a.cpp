#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int a, b, c; cin >> a >> b >> c;
    if (a * c < b) cout << c << endl;
    else cout << b / a << endl;
}