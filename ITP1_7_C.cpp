//
// 2022.04.16 12:49:36; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {

    ll r, c;
    cin >> r >> c;

    // 各行で和を出して、v.at(i).at(c) に代入する
    vector<vector<ll>> v(r+1, vector<ll>(c+1));
    for (int i = 0; i < r; i++) {

        ll r_sum = 0;
        for (int j = 0; j < c; j++) {
            cin >> v.at(i).at(j);
            r_sum += v.at(i).at(j);
        }
        v.at(i).at(c) = r_sum;
    }

    // 列ごとの合計を出す
    for (int i = 0; i < c+1; i++) {

        ll c_sum = 0;
        for (int j = 0; j < r+1; j++) {
            c_sum += v.at(j).at(i);
        }
        v.at(r).at(i) = c_sum;
    }

    // 出力して終わり
    rep(i, r+1) {
        rep(j, c+1) {
            cout << v.at(i).at(j);
            if (j != c) cout << " ";
        }
        cout << endl;
    }
}