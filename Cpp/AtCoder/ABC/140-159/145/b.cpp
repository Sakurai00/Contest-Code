#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n; cin >> n;
    string s; cin >> s;
    if (n % 2 != 0) {
        cout << "No\n";
        return 0;
    }
    int x = n / 2;
    int count = 0;
    bool ans = false;
    for (int i = 0; i < x; i++) {
        if (s[i] == s[x + i]) {
            count++;
            if (count == x) ans = true;
        }
    }

    if (ans == true) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}