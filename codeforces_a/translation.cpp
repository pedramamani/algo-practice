//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;

int main() {
    string w, r;
    cin >> w >> r;

    if (w.length() != r.length()) {
        NO;
        return 0;
    }

    FOR (i, w.length()) {
        if (w[i] != r[w.length() - i - 1]) {
            NO;
            return 0;
        }
    }
    YES;
}
