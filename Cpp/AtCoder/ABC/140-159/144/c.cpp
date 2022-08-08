#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    long long int i, j, ans, x = 1, y = 1, min_n;
    long long int n; cin >> n;
    min_n = n + 1;
    for (i = 1; i <= sqrt(n); i++) {
        j = n / i;
        if (n == i * j) {
            if (i + j <= min_n) {
                x = i;
                y = j;
            }
        }
    }

    ans = (x - 1) + (y - 1);
    cout << ans << endl;
}