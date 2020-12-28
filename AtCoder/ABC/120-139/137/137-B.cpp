#include <bits/stdc++.h>
using namespace std;

int main () {
    int K, X;
    cin >> K >> X;
    for (int i = 0; i < 2 * K - 1; i++) {
        printf("%d ", X - K + 1 + i);
    }
}