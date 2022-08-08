#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main () {
    int h, w; cin >> h >> w;
    char a[1000][1000];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    rep(i, w+2) printf("#");
    printf("\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w + 2; j++) {
            if (j == 0 || j == w) {
                printf("#");
            }
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    rep(i, w+2) printf("#");
    printf("\n");
    return 0;
}