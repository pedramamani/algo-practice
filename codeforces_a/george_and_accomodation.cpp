//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/467/A

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
    int n, p, c, cnt = 0;
    cin >> n;

    FOR (i, n) {
        cin >> p >> c;
        if (c - p >= 2)
            cnt++;
    }
    OUT(cnt);
}