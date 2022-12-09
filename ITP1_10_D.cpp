/**
 * @brief ミンコフスキー距離を計算してください.
 * 
 * @file ITP1_10_D.cpp
 * @date Dec 08, 2022 10:27:17 +0900
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

struct {
    constexpr operator int() {
        return INT_MAX;
    }

    constexpr auto operator -() {
        struct {
            constexpr operator int() {
                return INT_MIN;
            }
        }ret;
        return ret;
    }
} inf;

#pragma endregion

double distance(const vector<int> &x, const vector<int> &y, int p) {
    double result = 0;

    rep(i, x.size()) {
        result += pow(abs(x.at(i) - y.at(i)), p);
    }
    return pow(result, 1.0/p);
}

double chevychef(const vector<int> &x, const vector<int> &y) {
    double max = -inf;
    rep (i, x.size()) {
        double d = abs(x.at(i) - y.at(i));
        max = std::max(max, d);
    }
    return max;
}

int main(int argc, char *argv[]) {

    int n, in; vector<int> x, y;
    cin >> n;

    rep(j, n) {
        cin >> in;
        x.push_back(in);
    }

    rep(i, n) {
        cin >> in;
        y.push_back(in);
    }

    cout << fixed << setprecision(6);
    cout << distance(x, y, 1) << endl;
    cout << distance(x, y, 2) << endl;
    cout << distance(x, y, 3) << endl;
    cout << chevychef(x, y)   << endl;
}
