//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/705/A

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) c = (char) tolower(c)
#define C2U(c) c = (char) toupper(c)

using namespace std;

int main() {
    int n;
    cin >> n;
    string h = "I hate", l = "I love", f;

    FOR (i, n - 1) {
        if (i % 2 == 0)
            f += h;
        else
            f += l;
        f += " that ";
    }
    if (n % 2 == 1)
        f += h;
    else
        f += l;
    f += " it";
    OUT(f);
}