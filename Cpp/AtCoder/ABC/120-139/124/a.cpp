#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int a, b; cin >> a >> b;

    if (a + (a - 1) > a + b) cout << a + (a - 1) << endl;
    else if (b + (b - 1) > a + b) cout << b + (b - 1) << endl;
    else cout << a + b << endl;
}