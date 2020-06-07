//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/337/A

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
    int n, m, dif;
    cin >> n >> m;
    int ps[m];

    FOR (i, m) cin >> ps[i];
    sort(ps, ps + m);
    dif = ps[m - 1] - ps[0];

    FOR (i, m - n + 1) dif = min(dif, ps[i + n - 1] - ps[i]);
    OUT(dif);
}