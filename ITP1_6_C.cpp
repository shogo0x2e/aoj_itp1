//
// 2022.04.12; Written by Shogo Kitada
//

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {

    // 入力
    int n;
    cin >> n;
    array<array<array<int, 10>, 3>, 4> a2d;
    for (auto &&e : a2d) {
        for (auto &&ee : e) {
            ee.fill(0);
        }
    }

    // 入力は b 棟 f 階 r 番目の部屋 v 人
    rep(i, n) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;

        a2d.at(b-1).at(f-1).at(r-1) += v;
    }

    for (auto &&e : a2d) {
        for (auto &&ee: e) {
            for (auto &&eee: ee) {
                cout << " " << eee;
            }
            cout << endl;
        }
        // 最終行でなかったら
        if (&e != a2d.end() - 1) {
            cout << "####################" << endl;
        }
    }



}