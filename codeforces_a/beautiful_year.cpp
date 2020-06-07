//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include "cmath"
#include <set>

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) (c) = (char) tolower(c)
#define C2U(c) (c) = (char) toupper(c)

using namespace std;

int main() {
    set<int> digits = {};
    int y;
    cin >> y;

    while (digits.size() < 4) {
        y++;
        digits.clear();
        FOR (i, 4) digits.insert((y / (int) pow(10, i)) % 10);
    }
    OUT(y);
}