#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;

int main() {
    char b; cin >> b;
    if (b == 'A') cout << 'T' << endl;
    if (b == 'C') cout << 'G' << endl;
    if (b == 'T') cout << 'A' << endl;
    if (b == 'G') cout << 'C' << endl;
}