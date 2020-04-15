#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, A;
    cin >> N >> A;
    bool hantei = false ;
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < A + 1; j++) {
            if (N == 500 * i + j) hantei = true ;
        }

    }
    printf(hantei == true ? "Yes" : "No");
}