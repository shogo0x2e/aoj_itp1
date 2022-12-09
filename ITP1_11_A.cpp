/**
 * @brief サイコロを転がすシミュレーションを行うプログラム
 * 
 * @file ITP1_11_A.cpp
 * @date Dec 08, 2022 12:06:49 +0900
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
constexpr int INF = 1e9;

#pragma endregion

struct dice {
    int faces[3][4];
    int c = 0, r = 1;

    dice(vector<int> &v) {

        for (int i = 0; i < 4; i++) {
            faces[0][i] = v.at(0);
        }
        faces[1][0] = v.at(3);
        faces[1][0] = v.at(1);
        faces[1][0] = v.at(2);
        faces[1][0] = v.at(4);
        for (int i = 0; i < 4; i++) {
            faces[2][i] = v.at(5);
        }
    }

    int rotate(char dir) {
        switch (dir) {
            case 'N':
                if (--c < 0) c = 2;
                break;
            case 'S':
                if (++c >= 3) c = 0;
                break;
            case 'W':
                if (--r < 0) r = 3;
                break;
            case 'E':
                if (++r >= 4) r = 0;
                break;
        }

        return faces[c][r];
    }
};

int main() {
    vector<int> v;

    for (int i = 0; i < 6; i++) {
        v.push_back(0);
        cin >> v.back();
    }

    dice d(v);

    string s; int top;
    cin >> s;

    for (auto &&e : s) {
        top = d.rotate(e);
    }

    cout << top << endl;
}