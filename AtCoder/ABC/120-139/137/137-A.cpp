#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B, max;
    cin >> A >> B;
    max = A + B;
    if (max <= A * B) max = A * B;
    else if (max <= A - B) max = A - B;
    cout << max << endl;
}