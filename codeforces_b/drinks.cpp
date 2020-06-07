//
// Created by pedramamani on 2020-06-07.
// https://codeforces.com/problemset/problem/200/B

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
    int n, p, t = 0;
    cin >> n;

    FOR (i, n) {
        cin >> p;
        t += p;
    }
    OUT((double) t / n);
}