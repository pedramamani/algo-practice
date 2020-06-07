//
// Created by pedramamani on 2020-06-07.
// https://codeforces.com/problemset/problem/148/A

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
    set<int> damaged;
    int d, m, divs[4];

    FOR (i, 4) cin >> divs[i];
    cin >> d;

    for (int div:divs) {
        m = div;
        while (m <= d) {
            damaged.insert(m);
            m += div;
        }
    }
    OUT(damaged.size());
}