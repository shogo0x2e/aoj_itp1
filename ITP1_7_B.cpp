//
// 2022.04.15 13:41:18; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {

    ll n, x;

    while (cin >> n >> x, n) {

        // 組み合わせの個数
        ll result = 0;

        // 3 重ループでごり押し！ O(N^3) だが、 N
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                for (int k = j+1; k <= n; k++) {
                    if (i + j + k == x) result++;
                }
            }
        }

        std::cout << result << std::endl;
    }
}
