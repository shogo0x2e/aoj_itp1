//
// 2022.05.10 11:02:03; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    list<pair<char, ll>> d;
    vector<char> yaku{{'S', 'H', 'C', 'D'}};

    // set の初期化
    for (ll i = 0; i < 4; i++) {
        for (ll j = 1; j <= 13; j++) {
            d.emplace_back(yaku.at(i), j);
        }
    }

    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        char y; ll r;
        cin >> y >> r;

        d.remove(make_pair(y, r));
    }

    for (auto &&e : d) {
        cout << e.first << " " << e.second << endl;
    }
}
