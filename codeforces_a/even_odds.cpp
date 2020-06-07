//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <cmath>
#include <algorithm>

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) c = (char) tolower(c)
#define C2U(c) c = (char) toupper(c)

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + n % 2) / 2)
        OUT(2 * k - 1);
    else
        OUT(2 * (k - (n + n % 2) / 2));
}