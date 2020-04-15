#pragma region def
//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
using pint = pair<int, int>;
const int INF = 1e9;
const long long llINF = 1e18;
#pragma endregion

bool S[14], H[14], C[14], D[14];
int main() {
	int n; cin >> n;
	rep(i, n) {
		string s; int d; cin >> s >> d;
		if (s == "S")S[d] = true;
		if (s == "H")H[d] = true;
		if (s == "C")C[d] = true;
		if (s == "D")D[d] = true;
	}
	for (int i = 1; i <= 13; i++) {
		if (!S[i])cout << "S " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (!H[i])cout << "H " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (!C[i])cout << "C " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (!D[i])cout << "D " << i << endl;
	}
}