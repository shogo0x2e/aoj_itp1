//
// 2022.09.30 16:43:32; Written by shogo Kitada
//

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

// a 文字目から b 文字目までを出力する。
void print(const string &str, int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << str.at(i);
    }

    ///////////////////////////////////////////////////////
    // 改行を忘れない！！！！
    // Presentation Error になる！！
    ///////////////////////////////////////////////////////
    cout << endl;
}

// a 文字目から b 文字目までを逆順にする。
void reverse(string &str, int a, int b) {

    int n = (b - a) / 2 + (b - a) % 2;

    rep(i, n) {
        swap(str.at(a + i), str.at(b - i));
    }
}

// a 文字目から b 文字目までを p に置き換える。
void replace(string &str, int a, int b, const string &p) {

    for (int i = 0; i <= (b - a); i++) {
        str.at(a + i) = p.at(i);
    }
}

int main() {

    // 入力
    string s; int n;
    cin >> s >> n;

    rep(i, n) {
        string cmd;
        cin >> cmd;

        if (cmd == "print") {
            // 入力
            int a, b; 
            cin >> a >> b;

            print(s, a, b);
        }
        else if (cmd == "reverse") {
            int a, b;
            cin >> a >> b;

            reverse(s, a, b);
        }
        else if (cmd == "replace") {
            int a, b;
            string p;
            cin >> a >> b >> p;

            replace(s, a, b, p);
        }
    }


}
