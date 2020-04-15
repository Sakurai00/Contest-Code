//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const int INF = 1e9;
const llint llINF = 1e18;

int main () {
    int s; cin >> s;
    int l = s / 100, r = s % 100;
    if (1 <= l && l <= 12) {
        if (1 <= r && r <= 12) cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    } else {
        if (1 <= r && r <= 12) cout << "YYMM" << endl;
        else cout << "NA" << endl;
    }
    return 0;
}