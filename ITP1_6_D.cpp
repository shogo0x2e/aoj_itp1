//
// 2022.04.13 10:53:52; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {

    // 入力
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<int> vvec(m);
    for (auto &&e : matrix) {
        for (auto &&ee : e) {
            cin >> ee;
        }
    }
    for (auto &&e : vvec) {
        cin >> e;
    }

    for (int i = 0; i < n; i++) {
        int p = 0;
        for (int j = 0; j < m; j++) {
            p += matrix.at(i).at(j) * vvec.at(j);
        }
        std::cout << p << std::endl;
    }
}
