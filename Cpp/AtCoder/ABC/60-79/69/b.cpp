#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    string s; cin >> s;
    char start = s[0], end = s[s.size() - 1];
    printf("%c%d%c", start, s.size() - 2, end);
    return 0;
}