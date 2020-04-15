#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, count = 0; cin >> n >> k;
    vector<int> h(n,0);
    for (int i = 0; i < n; i++) cin >> h.at(i);
    for (int i = 0; i < n; i++) {
        if (k <= h.at(i)) count++;
    }
    cout << count << endl;
}