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
    int h, w, n;
    cin >> h >> w >> n;
    int ma = max(h, w);
    int i = 1;
    while (ma * i < n) {
        i++;
    }
    cout << i << endl;
    return 0;
}