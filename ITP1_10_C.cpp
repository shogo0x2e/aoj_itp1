/**
 * @brief n 人の学生を含むクラスでプログラミングの試験を行った。それぞれの
 *        得点をs1, s2 ... snとしたときの、標準偏差を求めるプログラムを
 *        作成せよ。
 * 
 * @file ITP_1_10_C.cpp
 * @date Dec 08, 2022 10:06:49 +0900
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
    int n, in; vector<int> s{};
    cin >> n;

    while (n != 0) {
        
        s.clear();

        // 入力
        rep(i, n) {
            cin >> in;
            s.push_back(in);
        }

        // 平均の算出
        double avg = 0;
        for (auto &&e : s) {
            avg += e;
        }
        avg /= n;

        // 分散の算出
        double spread = 0;
        for (auto &&e : s) {
            spread += pow(e - avg, 2);
        }
        spread /= n;

        cout << fixed << setprecision(8);
        cout << sqrt(spread) << endl;

        cin >> n;
    }
}
