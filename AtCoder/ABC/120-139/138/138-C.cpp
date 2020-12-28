#include <bits/stdc++.h>
using namespace std;

int main () {
    int N; cin >> N;
    vector<float> v(N);
    for (int i = 0; i < N; i++){
        cin >> v.at(i);
    }
    sort(v.begin(), v.end(), greater<float>());
    for (int i= N; i >= 2; i--) {
        float x;
        x = (v.at(i - 2) + v.at(i - 1)) / 2.0;
        v.pop_back();
        v.pop_back();
        v.push_back(x);
    }
    cout << v.at(0) << endl;

}