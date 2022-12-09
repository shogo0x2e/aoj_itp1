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
    // 展開図を回転させる -> 
    array<int, 7> faces;

    dice(vector<int> &v) {
        for (int i = 0; i < 6; i++) {
            faces.at(i+1) = v.at(i);
        }
    }

    void rotate(char c) {
        switch (c) {
            case 'N':
                swap(faces.at(5), faces.at(6));
                swap(faces.at(6), faces.at(2));
                swap(faces.at(2), faces.at(1));
                break;
            case 'S':
                swap(faces.at(5), faces.at(1));
                swap(faces.at(1), faces.at(2));
                swap(faces.at(2), faces.at(6));
                break;
            case 'E':
                swap(faces.at(4), faces.at(1));
                swap(faces.at(1), faces.at(3));
                swap(faces.at(3), faces.at(6));
                break;
            case 'W':
                swap(faces.at(5), faces.at(4));
                swap(faces.at(4), faces.at(2));
                swap(faces.at(2), faces.at(3));
                break;
        }
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
