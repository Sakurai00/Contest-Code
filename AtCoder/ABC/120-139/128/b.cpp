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
    int n; cin >> n;
    pair<pair<string, int>, int> p[120];
    for (int i = 0; i < n; i++) {
        string temp;
        int x;
        cin >> temp >> x;
        p[i] = make_pair(make_pair(temp, -x), i);
    }
    sort(p, p+n);
    for (int i = 0; i < n; i++) {
        cout << p[i].second + 1 << endl;
    }
    return 0;
}