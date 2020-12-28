#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n, a, b; cin >> n >> a >> b;
    int sum = 0, tmp, ans = 0;

    for (int i = 1; i <= n; i++) {
        tmp = i; sum = 0;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (a <= sum && sum <= b) ans += i;
    }
    cout << ans << endl;
}