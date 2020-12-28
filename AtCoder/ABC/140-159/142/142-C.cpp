#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    int x;
    vector<pair<int, int> > pairs(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        pairs[i] = make_pair(x, i + 1);
    }
    sort(pairs.begin(), pairs.end());
    for (int i = 0; i < n; i++) {
        printf("%d ",pairs[i].second);
    }
}