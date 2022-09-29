//
// 2022.04.22 16:20:39; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

// 添え字を管理してくれる関数を作る。

int main() {

    string s, p;
    cin >> s >> p;

    s += s;

    rep(i, s.size()) {
        if (s.substr(i, p.size()) == p) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
