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
    int n, m; cin >> n >> m;
    vint s(m), c(m);
    rep(i, m) cin >> s[i] >> c[i];

    bool check = false;
    int checkM = 0;

    if (n == 1) {
        for (int i = 0; i < 10; i++) {
            string temp = to_string(i);
            checkM = 0;
            for (int j = 0; j < m; j++) {
                int keta = s[j] - 1;
                if (temp[keta] == (c[j] + '0')) checkM++;
            }
            if (checkM == m) {
                cout << i << endl;
                return 0;
            }
        }
    } else if (n == 2) {
        for (int i = 10; i < 100; i++) {
            string temp = to_string(i);
            checkM = 0;
            for (int j = 0; j < m; j++) {
                int keta = s[j] - 1;
                if (temp[keta] == (c[j] + '0')) checkM++;
            }
            if (checkM == m) {
                cout << i << endl;
                return 0;
            }
        }
    } else if (n == 3){
        for (int i = 100; i < 1000; i++) {
            string temp = to_string(i);
            checkM = 0;
            for (int j = 0; j < m; j++) {
                int keta = s[j] - 1;
                if (temp[keta] == (c[j] + '0')) checkM++;
            }
            if (checkM == m) {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << "-1" << endl;
    return 0;
}