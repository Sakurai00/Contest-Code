﻿#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  else if (op == "-") {
    cout << A - B << endl;
  }
  else if (op == "*") {
    cout << A * B << endl;
  }
  else if (B == 0 && op == "/") cout << "error" << endl;
  else if (op == "/") {
    cout << A / B << endl;
  }
  else if (op == "?" || op == "=" || op == "!") {
    cout << "error" << endl;
  }
}