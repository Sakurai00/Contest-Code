#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> A(N,0);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    int count = 0;
    bool even = true;
    while(even == true){
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 != 0) even = false;
        }
        for (int j = 0; j < N; j++) {
            A.at(j) /= 2;
        }
        count++;
    }
    cout << count - 1 << endl;

}