/**
 * @brief ２点 P1(x1, y1), P2(x2, y2) の距離を求める
 *        プログラムを作成せよ。
 * 
 * @file ITP1_10_A.cpp
 * @date Dec 07, 2022 11:57:01 +0900
 * @author Shogo Kitada (contact@shogo0x2e.com)
 * 
 * @copyright (c) 2022 SHOGO KITADA All Rights Reserved.
 *            I would be happy to notify me if you use my codes.
 */

#include <bits/stdc++.h>

#pragma region macros

    #ifdef _DEBUG
    #define DEB(x) std::cout << #x << ": " << x << endl;
    #else
    #define DEB(x)
    #endif

    #define rep(i, n) for (int i = 0; i < (int)(n); i++)
    using namespace std;
    using ll = long long;

#pragma endregion

struct point {
    double x;
    double y;
};

int main(int argc, char *argv[]) {

    point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    double res = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("%.8f\n", res);
}
