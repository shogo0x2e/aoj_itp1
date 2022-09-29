//
// 2022.02.27 11:07; Written by Shogo Kitada
//

#include <iostream>
#include <cmath>

int main() {
    int s;
    std::cin >> s;

    // 時: 分: 秒
    std::cout << s / (60*60) << ":" << (s % (60*60)) / 60 << ":" << s % 60 
              << std::endl;
}