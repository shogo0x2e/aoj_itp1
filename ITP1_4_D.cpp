//
// 2022.03.06 21:30; Written by Shogo Kitada
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <limits>

constexpr int   INF = std::numeric_limits<int>::max();
constexpr int M_INF = std::numeric_limits<int>::min();

int main() {

    int n, max = M_INF, min = INF;
    long long sum = 0;

    std::cin >> n;
    for (int i = 0; i < n; i++) {

        int ai;
        std::cin >> ai;

        // 最大値
        if (ai > max) max = ai;
        // 最小値
        if (ai < min) min = ai;
        // 総和
        sum += ai;
    }

    std::printf("%d %d %lld\n", min, max, sum);
}
