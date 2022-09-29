//
// 2022.02.27 11:41; Written by Shogo Kitada
//

#include <iostream>
#include <string>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a < b && b < c) std::cout << "Yes" << std::endl;
    else                std::cout << "No"  << std::endl;
}