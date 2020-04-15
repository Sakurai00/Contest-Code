#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    string s;
    cin >> s;
    int ans = 0, len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - 1 - i]) ans++;
    }
    cout << ans / 2<< endl;
    return 0;
}