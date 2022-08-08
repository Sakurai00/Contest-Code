#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    string s; cin >> s;
    int ans = 0;
    if (s[0] == 'o') ans++;
    if (s[1] == 'o') ans++;
    if (s[2] == 'o') ans++;
    cout << ans * 100 + 700 << endl;
    return 0;
}