#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<float> A(N);
    for (int i = 0 ; i < N ; i++) {
        cin >> A.at(i);
    }
     float sum;
    for (int i = 0 ; i < N ; i++) {
        A.at(i) = 1 / A.at(i);
        sum += A.at(i);
    }
    cout << 1.0 / sum << endl;

}