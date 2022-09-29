//
// 2022.03.03 23:19; Written by Shogo Kitada
//

#include <iostream>
#include <vector>

int main() {

    int a, b;
    char op;

    std::cin >> a >> op >> b;

    while (op != '?') {

        int res;

        // 演算
        switch (op) {
            case '+': res = a + b; break;
            case '-': res = a - b; break;
            case '*': res = a * b; break;
            case '/': res = a / b; break;
        }

        // 結果の表示
        std::cout << res << std::endl;

        // 次の処理を準備
        std::cin >> a >> op >> b;
    }
