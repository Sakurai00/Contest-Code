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
const int MOD = 1e9 + 7;
const long long llINF = 1e18;
#pragma endregion

int main () {
    int a[3][3], n;
    bool table[3][3] = {false};
    rep(i, 3) {
        rep(j, 3) {
            cin >> a[i][j];
        }
    }
    cin >> n;
    vint b(n);
    rep(i, n) cin >> b[i];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < n; k++) {
                if (b[k] == a[i][j]) {
                    table[i][j] = true;
                }
            }
        }
    }
    bool check = false;
    int temp = 0;

    for (int i = 0; i < 3; i++) {
        temp = 0;
        for (int j = 0; j < 3; j++) {
            if (table[i][j] == true) temp++;
        }
        if (temp == 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        temp = 0;
        for (int j = 0; j < 3; j++) {
            if (table[j][i] == true) temp++;
        }
        if (temp == 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (table[0][0] == true && table[1][1] == true && table[2][2] == true) {
        cout << "Yes" << endl;
        return 0;
    }

    if (table[0][2] == true && table[1][1] == true && table[2][0] == true) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}