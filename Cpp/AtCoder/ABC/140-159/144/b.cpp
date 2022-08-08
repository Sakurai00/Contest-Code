#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n; cin >> n;
    bool ans = false;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (n == i * j) ans = true;
            else continue;
        }
    }
    if (ans == true) {
         cout << "Yes\n";
    }
    else {
         cout << "No\n";
    }
}