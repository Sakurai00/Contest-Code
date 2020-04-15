#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;


int sum_of_digit (int x) {
    llint sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main () {
    int n, x; cin >> n;
    x = sum_of_digit(n);
    if (n % x == 0) cout << "Yes\n";
    else cout << "No\n";
}