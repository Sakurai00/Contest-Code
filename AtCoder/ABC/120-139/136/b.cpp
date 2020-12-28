#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n, count = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (1<=i&&i<=9 || 100<=i&&i<=999 || 10000<=i&&i<=99999) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}