#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n, check_n, max_n = 0, count, max_count = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        check_n = i; count = 0;
        while (check_n > 0) {
            check_n /= 2;
            count++;
        }
        if (count > max_count) {
            max_n = i;
            max_count = count;
        }
    }
    cout << max_n << endl;
    return 0;
}