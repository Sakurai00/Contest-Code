#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    string s; cin >> s;
    int a = s[0] - '0', b = s[1] - '0', c = s[2] - '0', d = s[3] - '0';
    if (a+b+c+d == 7) printf("%d+%d+%d+%d=7", a, b, c, d);
    else if (a+b+c-d == 7) printf("%d+%d+%d-%d=7", a, b, c, d);
    else if (a+b-c+d == 7) printf("%d+%d-%d+%d=7", a, b, c, d);
    else if (a-b+c+d == 7) printf("%d-%d+%d+%d=7", a, b, c, d);
    else if (a+b-c-d == 7) printf("%d+%d-%d-%d=7", a, b, c, d);
    else if (a-b-c+d == 7) printf("%d-%d-%d+%d=7", a, b, c, d);
    else if (a-b-c-d == 7) printf("%d-%d-%d-%d=7", a, b, c, d);
    else if (a-b+c-d == 7) printf("%d-%d+%d-%d=7", a, b, c, d);
    else ;
    return 0;
}