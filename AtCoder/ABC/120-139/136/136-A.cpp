#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B, C, ans;
    cin >> A >> B >> C;
    ans = C - (A - B);
    if (ans > 0) cout << ans << endl;

    else cout << "0" << endl;
}