#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B, i; cin >> A >> B;
    bool ans = false;
    for (i = 0; i < max(A,B); i++) {
        if (abs(A - i) == abs(B - i)) {
            ans = true;
            break;
        }
    }
    if(ans == true) cout << i << endl;
    else cout << "IMPOSSIBLE" << endl;
}