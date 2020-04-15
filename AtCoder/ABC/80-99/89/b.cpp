#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int n; cin >> n;
    vector<char> s(n);
    bool four = false;
    rep (i, n) {
        cin >> s.at(i);
        if (s.at(i) == 'Y') four = true;
    }
    if (four == true) cout << "Four\n";
    else cout << "Three\n";
}