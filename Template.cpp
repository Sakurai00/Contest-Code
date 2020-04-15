#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const int INF = 1e9;
const llint llINF = 1e18;

int main () {
    return 0;
}

int sub () {
    int N, i, x, a, n, m;
    string s;

    vector<int> A(N,0); //可変長の配列 配列数N,0で初期化
    vector<vector<int>> B(n, vector<int>(m));
    A.at(i) ;           //配列xの要素i A[i]
    A.pop_back;         //配列xの最後を取り除く
    A.push_back(1),     //配列xの最後に1を追加

    s.erase(unique(s.begin(), s.end()), s.end()); // 重複文字削除

    sort(A.begin(), A.end(), greater<int>()); //配列xを大→小でソート

    cout << ((x < a) ? "0" : "10") << endl; //三項演算 (x < a)ならば0を出力。そうでなければ10を出力
    ceil((double)x);  //切り上げ
    floor((double)x);  //切り下げ

    s.substr(i, 3); //i番目から3文字抜き出す

    /*//string→int
    string s; cin >> s;
    int x = s[0] - '0';*/

    //網羅組み合わせ（重複なし）
    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++) {
        }
    }
    
    // setに一致するものを探す
    set<int> st;
    bool check = true;
    auto itr = st.find(x);
    if (itr != st.end()) {
        check = false;
    }

    //二分探索
    llint l = 0, r = INF + 1;
    while (r - l > 1) {
        llint c = (l + r) / 2;
        if (/*条件*/x) l = c;
        else r = c;
    }
}
