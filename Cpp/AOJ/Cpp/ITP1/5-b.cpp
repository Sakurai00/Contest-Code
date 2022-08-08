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
    int h, w;
    while(1) {
        cin >> h >> w;
        if (h == 0 && w == 0) break;

        rep(i, h) {
            rep(j, w) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) cout << "#";
                    else cout << ".";
                } else {
                    if (j % 2 == 0) cout << ".";
                    else cout << "#";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}