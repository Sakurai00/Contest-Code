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
    vector<string> s(n), ans;
    map<string, int> mp;
    rep(i, n) {
        cin >> s[i];
        mp[s[i]]++;
    }
    int maxn = 0;
    for (int i = 0; i < n; i++) {
        maxn = max(mp[s[i]], maxn);
    }
    for (int i = 0; i < n; i++) {
        if (mp[s[i]] == maxn) {
            ans.push_back(s[i]);
        }
    }
    sort(all(ans));
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}