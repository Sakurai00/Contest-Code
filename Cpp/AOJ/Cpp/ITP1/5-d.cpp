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
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
        } else {
            while(x != 0) {
                if(x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
        cout << endl;
    return 0;
}