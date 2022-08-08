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
    string s; cin >> s;
    bool can = false;
    for (int i = 0; i < s.size() - 1; i+=2) {
        if (s[i] == 'h' && s[i + 1] == 'i') can = true;
        else can = false;
    }
    if(can)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}