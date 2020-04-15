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
    int n = 5;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vint time = {a, b, c, d, e};
    vint nexttime(n);
    for (int i = 0; i < n; i++) {
        if (time[i] % 10 == 0) nexttime[i] = time[i];
        else nexttime[i] = time[i] - time[i] % 10 + 10;
    }
    int besttime = INF;
    for (int i = 0; i < n; i++) {
        int sumtime = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sumtime += time[j];
            } else {
                sumtime += nexttime[j];
            }
        }
        besttime = min(besttime, sumtime);
    }
    cout << besttime << endl;
    return 0;
}