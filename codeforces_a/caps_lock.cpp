//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) (c) = (char) tolower(c)
#define C2U(c) (c) = (char) toupper(c)

using namespace std;

int main() {
    string w;
    cin >> w;

    if (islower(w[0])) {
        FOR(i, w.length() - 1) {
            if (islower(w[i + 1])) {
                OUT(w);
                return 0;
            }
        }
        C2U(w[0]);
        FOR(i, w.length() - 1) C2L(w[i + 1]);
    } else {
        FOR(i, w.length()) {
            if (islower(w[i])) {
                OUT(w);
                return 0;
            }
        }
        FOR(i, w.length()) C2L(w[i]);  // todo: Use range-based loop?!
    }
    OUT(w);
}