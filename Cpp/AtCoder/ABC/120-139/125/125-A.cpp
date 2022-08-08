#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, t, i = 1, ans = 0; cin >> a >> b >> t;
    while (t + 0.5 >= i * a){
        ans+= b;
        i++;
    }
    cout << ans << endl;
}