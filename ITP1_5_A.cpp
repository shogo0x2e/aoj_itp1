//
// 2022.03.06 21:30; Written by Shogo Kitada
//

#include <iostream>

int main() {
    
    int H, W;
    std::cin >> H >> W;

    while (H != 0 || W != 0) {

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                std::cout << '#';
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
        
        std::cin >> H >> W;
    }

}
