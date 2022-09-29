//
// 2022.05.11 09:46:23; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using  ll = long long;
using ull = unsigned ll;
using namespace std;

ll judge(string const& l, string const& r) {
    for (ull i = 0; i < min(l.size(), r.size()); i++) {
        if (l.at(i) < r.at(i)) {
            return 1;
        }
        else if (l.at(i) > r.at(i)) {
            return -1;
        }
    }

    if (l.size() < r.size()) {
        return 1;
    }
    else if (l.size() > r.size()) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    ll n, taro = 0, hanako = 0;
    cin >> n;

    rep(i, n) {
        string l, r;
        cin >> l >> r;

        ll res = judge(l, r);
        switch (res) {
            case -1: taro += 3;        break;
            case  0: taro++, hanako++; break;
            case  1: hanako += 3;      break;
            default:                   break;
        }
    }

    cout << taro << " " << hanako << endl;
}
