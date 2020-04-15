#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int N, Y; cin >> N >> Y;
    int x = -1, y = -1, z = -1, tmp, total;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            tmp = N - i - j;
            if (tmp < 0) continue;
            total = i*10000 + j*5000 + tmp*1000;
            if (total == Y) {
                x = i;
                y = j;
                z = tmp;
            }
        }
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}