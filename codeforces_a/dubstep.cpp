//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/208/A

#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>
#include <set>
#include <vector>

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) c = (char) tolower(c)
#define C2U(c) c = (char) toupper(c)

using namespace std;

int main() {  // todo: This took me some time to figure out!
    string s, out;
    cin >> s;
    int b = 0, i = 0, l = s.length();

    while (i < l) {
        if (i + 2 < l and s.substr(i, 3) == "WUB") {
            if (b != 0) {
                out += s.substr(i - b, b);
                out += ' ';
                b = 0;
            }
            i += 3;
        } else {
            b++;
            i++;
        }
    }

    if (b != 0) {
        out += s.substr(i - b, b);
        out += ' ';
    }
    out.pop_back();
    OUT(out);
}