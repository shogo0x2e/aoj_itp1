//
// 2022.02.27 21:11; Written by Shogo Kitada
//

#include <iostream>
#include <vector>
#include <array>
#include <utility>

int main() {
    std::vector<std::array<int, 2>> v{};

    int x, y;
    std::cin >> x >> y;

    // x, y のどちらかに数値がある
    while (x != 0 || y != 0) {

        // 小さい順に入れ替える
        if (x > y) std::swap(x, y);

        // vector に積む
        v.push_back({x, y});
        std::cin >> x >> y;
    }

    for (std::size_t i = 0; i < v.size(); i++) {
        std::cout << v.at(i).at(0) << " " << v.at(i).at(1) << std::endl;
    }
}