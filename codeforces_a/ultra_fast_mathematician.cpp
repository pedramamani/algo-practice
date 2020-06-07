//
// Created by pedramamani on 2020-06-07.
// https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>
#include <set>

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) c = (char) tolower(c)
#define C2U(c) c = (char) toupper(c)

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b;

    FOR (i, a.length()) {
        if (a[i] == b[i])
            c += '0';
        else
            c += '1';
    }
    OUT(c);
}

