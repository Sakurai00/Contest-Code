#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int a, b, c, d, e, k;
    bool flag = true;
    cin >> a >> b >> c >> d >> e >> k;
    if (b - a > k) flag = false;
    if (c - a > k) flag = false;
    if (d - a > k) flag = false;
    if (e - a > k) flag = false;
    if (c - b > k) flag = false;
    if (d - b > k) flag = false;
    if (e - b > k) flag = false;
    if (d - c > k) flag = false;
    if (e - c > k) flag = false;
    if (e - d > k) flag = false;

    if (flag == true) cout << "Yay!\n";
    else cout << ":(\n";
}