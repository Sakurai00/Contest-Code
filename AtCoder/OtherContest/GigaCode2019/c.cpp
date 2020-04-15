#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;

int main () {
    long long d; cin >> d;
    vector<long long> a(d), b(d);
    rep(i, d) cin >> a[i];
    rep(i, d) cin >> b[i];
    int now = 0, min = b[0];
    bool check = false;
    for (int i = 0; i < d; i++) {
        if (now >= b[i]) {
            if (min >= b[i]) min = b[i];
            check = true;
        }
        now += a[i];
        if (now >= b[i]) {
            if (min >= b[i]) min = b[i];
            check = true;

        }
    }
    if(check) cout << min << endl;
    else cout << "-1" << endl;
    return 0;
}