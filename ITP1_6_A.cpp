//
// 2022.03.13 0:55; Written by Shogo Kitada
//

#include <iostream>
#include <vector>

int main() {

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (auto &&e : a) std::cin >> e;

    for (int i = n-1; i >= 0; i--) {
        std::cout << a.at(i);
        if (i > 0) std::cout << " ";
    }
    std::cout << std::endl;
}
