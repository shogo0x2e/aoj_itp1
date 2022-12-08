/**
 * @brief 三角形の２辺 a, b とその間の角 C から、その三角形の面積 S、
 *        周の長さ L, a を底辺としたときの高さ h を求めるプログラムを
 *        作成して下さい。
 * 
 * @file ITP1_10_B.cpp
 * @date Dec 07, 2022 12:55:57 +0900
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

int main(int argc, char *argv[]) {
    int c_deg;
    double a, b, S, L, h;
    cin >> a >> b >> c_deg;

    double C = (c_deg / 180.0) * M_PI;

    S = (a*b*sin(C))/ 2;
    L = a + b + sqrt((a*a + b*b - 2*a*b*cos(C)));
    h = b * sin(C);

    printf("%.8f\n", S);
    printf("%.8f\n", L);
    printf("%.8f\n", h);
}
