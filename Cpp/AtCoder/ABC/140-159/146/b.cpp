#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] == 'Z') s[i] = 'A';
            else s[i]++;
        }
    }
    cout << s << endl;
    return 0;
}