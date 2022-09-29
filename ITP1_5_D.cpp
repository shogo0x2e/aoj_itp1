//
// 2022.03.13 0:55; Written by Shogo Kitada
//

#include <iostream>

void call(int n) {

    int i = 1;

    while (++i <= n) {

        int x = i;

        if (x % 3 == 0) {
            std::cout << " " << i;
        }
        else {
            while (x) {

                if (x % 10 == 3) {
                    std::cout << " " << i;
                    break;
                }

                x /= 10;
            }
        }
    }

    std::cout << std::endl;
}

int main() {
    
    int n;
    std::cin >> n;

    call(n);
}
