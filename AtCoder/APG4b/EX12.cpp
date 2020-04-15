#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int S_long=S.size(), ans = 1;

  for (int i = 1; i < S_long; i += 2){
    if (S.at(i) == '+') ans += 1;
    else ans -= 1;
  }
  cout << ans << endl;
}