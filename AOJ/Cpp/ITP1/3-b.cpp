#pragma region def
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
using pint = pair<int, int>;
const int INF = 1e9;
const long long llINF = 1e18;
#pragma endregion

int main () {
    vint x;
    int temp;
    while (1) {
        cin >> temp;
        if (temp != 0) x.push_back(temp);
        else break;
    }
    for (int i = 0; i < x.size(); i++) {
        printf("Case %d: %d\n", i + 1, x[i]);
    }
    return 0;
}