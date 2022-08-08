#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int n_min, n_max;
  n_min = min(A,B);
  n_min = min(n_min,C);

  n_max = max(A,B);
  n_max = max(n_max,C);

  cout << n_max - n_min <<endl;
}