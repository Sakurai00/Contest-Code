#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b, min; cin >> n >> a >> b;
    min = n * a;
    if (min > b) cout << b << endl;
    else cout << n * a << endl;
}