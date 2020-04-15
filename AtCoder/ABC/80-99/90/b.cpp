#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int a, b, ans = 0; cin >> a >> b;
    string i_tmp, i_tmpr;
    for (int i = a; i <= b; i++) {
        i_tmp = to_string(i);
        i_tmpr = i_tmp;
        reverse(all(i_tmpr));
        if (i_tmp == i_tmpr) ans++;
    }
    cout << ans << endl;
}