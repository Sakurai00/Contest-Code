#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    set<int> x;
    rep(i, n) x.insert(a[i]);

    cout << x.size() << endl;
}