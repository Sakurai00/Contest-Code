#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int i, ave = 0;

  for (i = 0; i < N; i++){
    cin >> A.at(i);
    ave += A.at(i);
  }
  ave /= N;


  for (i = 0; i < N; i++){
    if (A.at(i) - ave >= 0) printf ("%d\n", A.at(i) - ave);
    else printf ("%d\n", ave - A.at(i));
  }
}