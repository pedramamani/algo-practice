//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/59/A

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
    int l = 0;
    string w;
    cin >> w;

    for (char c: w)
        if (islower(c))
            l++;

    if (l >= w.length() - l)
        FOR (i, w.length()) C2L(w[i]);  // todo: Why does it warn narrowing conversion?!
    else
        FOR (i, w.length()) C2U(w[i]);
    OUT(w);
}
