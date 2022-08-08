#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    string s; cin >> s;
    int ans = 0;
    if (s[0] == '1') ans++;
    if (s[1] == '1') ans++;
    if (s[2] == '1') ans++;
    cout << ans << endl;
}