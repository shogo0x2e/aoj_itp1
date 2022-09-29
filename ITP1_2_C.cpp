//
// 2022.02.27 11:41; Written by Shogo Kitada
//

#include <iostream>
#include <utility>

constexpr int SIZE = 3;

int main() {
    int a[SIZE];
    for (auto &&e: a) std::cin >> e;

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 1; j < SIZE; j++) {
            if (a[i] > a[j]) std::swap(a[i], a[j]);
        }
    }

    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
}