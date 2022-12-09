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
    // 2次元配列 -> E と W への対応ができない
    array<int, 7> faces;

    dice(vector<int> &v) {
        for (int i = 0; i < 6; i++) {
            faces.at(i+1) = v.at(i);
        }
    }

    void rotate(char c) {
        int temp;
        switch (c) {
            case 'N':
                rotate_raw(1, 2, 6, 5);
                break;
            case 'S':
                rotate_raw(1, 5, 6, 2);
                break;
            case 'E':
                rotate_raw(1, 4, 6, 3);
                break;
            case 'W':
                rotate_raw(1, 3, 6, 4);
                break;
        }
    }

    void rotate_raw(int a, int b, int c, int d) {
        int temp = faces.at(a);
        faces.at(a) = faces.at(b);
        faces.at(b) = faces.at(c);
        faces.at(c) = faces.at(d);
        faces.at(d) = temp;
    }
};

int main() {
    vector <int> v;
    for (int i = 0; i < 6; i++) {
        v.push_back(0);
        cin >> v.back();
    }

    dice d(v);
    string s;
    cin >> s;

    for (auto &&e : s) {
        d.rotate(e);
    }

    cout << d.faces.at(1) << endl;
}
