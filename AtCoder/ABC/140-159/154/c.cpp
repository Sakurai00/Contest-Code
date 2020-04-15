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
    vint a(n);
    set<int> st;
    rep(i, n) {
        cin >> a[i];
        st.insert(a[i]);
    }
    if (a.size() == st.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}