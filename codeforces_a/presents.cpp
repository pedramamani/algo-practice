//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/136/A

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
    int n, c;
    string o;
    cin >> n;
    int gs[n];

    FOR (i, n) {
        cin >> c;
        gs[c - 1] = i + 1;
    }

    for (int g:gs) {  // todo: Is there a nicer way to join? Or how can I define my own.
        o += to_string(g);
        o += ' ';
    }
    o.pop_back();
    OUT(o);
}