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
    char s[n], t[n];
    cin >> s >> t;
    char ans[n * 2];
    int a = 0, b = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            ans[i] = s[a];
            a++;
        }
        else {
            ans[i] = t[b];
            b++;
        }
    }
    ans[n * 2] = '\0';
    cout << ans << endl;
    return 0;
}