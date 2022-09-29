//
// 2022.03.03 22:14; Written by Shogo Kitada
//

#include <iostream>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = static_cast<double>(a) / b;

    std::printf("%d %d %.5f\n", d, r, f);
}