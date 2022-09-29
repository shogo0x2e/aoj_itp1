//
// 2022.03.03 22:14; Written by Shogo Kitada
//

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int num_of_devisors = 0;
    for (int i = a; i <= b && i <= c; i++) {
        if (c % i == 0) num_of_devisors++;
    }

    std::cout << num_of_devisors << std::endl;
}