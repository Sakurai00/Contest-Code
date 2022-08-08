#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    cin >> a >>b;
    int i, sum = 1;
    for (i = 0; b > sum; i++) {
        sum += a - 1;
    }
    cout << i << endl;
}