//
// 2022.05.09 19:27:31; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    ll w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;

    // x 軸について
    if (x-r >= 0 && x+r <= w) {
        // y 軸について
        if (y-r >= 0 && y+r <= h) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}