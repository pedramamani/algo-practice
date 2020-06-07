//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/486/A

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
    long long n, out;
    cin >> n;

    if (n % 2 == 1)
        out = -(n + 1) / 2;
    else
        out = n / 2;
    OUT(out);
}

