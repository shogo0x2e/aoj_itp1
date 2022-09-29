//
// 2022.05.11 09:23:15; Written by Shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    string s;

    while (cin >> s, s != "-") {
        ll m, sum = 0;
        cin >> m;
        for (ll i = 0; i < m; i++) {
            ll in; cin >> in;
            sum += in;
        }

        
        ll t = s.size();
        
        sum %= t;
        s += s;
        s = s.substr(sum, t);

        cout << s << endl;
    }
}
