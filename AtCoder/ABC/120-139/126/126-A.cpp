#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if (s.at(k - 1) == 'A') s.at(k - 1) = 'a';
    if (s.at(k - 1) == 'B') s.at(k - 1) = 'b';
    if (s.at(k - 1) == 'C') s.at(k - 1) = 'c';
    cout << s << endl;
}