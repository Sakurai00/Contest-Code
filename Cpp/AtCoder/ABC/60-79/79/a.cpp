#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    string n; cin >> n;
    if ((n[0] == n[1] && n[1] == n[2])||(n[1] == n[2] && n[2] == n[3])) cout << "Yes\n";
    else cout << "No\n";
}