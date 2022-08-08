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
    int n, m;
    cin >> n >> m;
    vint p(m);
    vector<string> s(m);
    rep(i, m) {
        cin >> p[i] >> s[i];
    }
    set<int> st;
    map<int, int> mp;
    int ok = 0, pe = 0;
    for (int i = 0; i < m; i++) {
        bool check = true;
        auto itr = st.find(p[i]);
        if (itr != st.end()) {
            check = false;
        }
        if (s[i] == "WA") {
            mp[p[i]]++;
        } else if (s[i] == "AC" && check == true) {
            ok++;
            pe += mp[p[i]];
            st.insert(p[i]);
        }
    }
    cout << ok << " " << pe << endl;
    return 0;
}