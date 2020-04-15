#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, ans = 0; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) ans++;
    }
    if (ans <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}