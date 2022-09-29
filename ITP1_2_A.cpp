//
// 2022.02.27 11:41; Written by Shogo Kitada
//

#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::string res_op = "";

    if      (a < b) res_op = "<";
    else if (a > b) res_op = ">";
    else            res_op = "==";

    std::cout << "a " << res_op << " b" << std::endl;
}