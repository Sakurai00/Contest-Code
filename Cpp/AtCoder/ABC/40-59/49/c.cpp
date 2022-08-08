#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    string checkbase[4] = {"dream", "dreamer", "erase", "eraser"};
    string s, check; cin >> s;
    reverse(s.begin(), s.end());
    rep (i, 4) reverse(checkbase[i].begin(), checkbase[i].end());

    for (int i = 0; i < s.size(); i++) {
        check += s[i];
        if (check == checkbase[0] ||check == checkbase[1] ||check == checkbase[2] ||check == checkbase[3]) check = "";
    }

    if (check == "") cout << "YES" << endl;
    else cout << "NO" << endl;
}