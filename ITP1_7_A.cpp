//
// 2022.04.13 10:53:52; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    ll m, f, r;
    cin >> m >> f >> r;

    while (!(m == -1 && f == -1 && r == -1)) {

        int all = m + f;
        if (m == -1 || f == -1) {
            std::cout << "F" << std::endl;
        }
        else if (all < 30) {
            std::cout << "F" << std::endl;
        }
        else if (all < 50) {
            if (r >= 50) {
                std::cout << "C" << std::endl;
            }
            else {
                std::cout << "D" << std::endl;
            }
        }
        else if (all < 65) {
            std::cout << "C" << std::endl;
        }
        else if (all < 80) {
            std::cout << "B" << std::endl;
        }
        else {
            std::cout << "A" << std::endl;
        }

        cin >> m >> f >> r;
    }
}