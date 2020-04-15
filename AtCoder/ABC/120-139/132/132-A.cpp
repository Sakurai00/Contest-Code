#include <bits/stdc++.h>
using namespace std;

int main () {

    char S[4]; cin >> S;
    sort (S, S + 4);
    if (S[0] == S[1] && S[2] == S[3] && S[1] != S[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}