#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main () {
    int n, count = 0; cin >>n;
    string s; cin >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s.size() << endl;
}
