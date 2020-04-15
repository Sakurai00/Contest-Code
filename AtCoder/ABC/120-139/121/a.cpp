#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int h, w, x, y; cin >> h >> w >> x >> y;
    cout << h * w - (x*w + y*h - x*y) << endl;
}