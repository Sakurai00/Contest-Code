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

template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}

int gcd(int x,int y){return y?gcd(y,x%y):x;}
int lcm(int x,int y){return x*y/gcd(x,y);}

//素数判定
bool isPrime (int x) {
    if (x == 2) return true;
    if ((x < 2) || (x % 2 == 0)) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

//10進数で各桁の和
llint sumOfDigit (llint x) {
    llint sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

//整数の桁数
llint getDigit (llint x){
    llint digit = 0;
    while (x != 0) {
        x /= 10;
        digit++;
    }
    return digit;
}

