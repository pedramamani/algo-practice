//
// Created by pedramamani on 2020-06-07.
// https://codeforces.com/problemset/problem/25/A

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
    set<int> odds;
    set<int> evens;
    int n, m, so, se;
    cin >> n;

    FOR (i, n) {
        cin >> m;
        if (m % 2 == 1)
            odds.insert(i + 1);
        else
            evens.insert(i + 1);
        so = odds.size(), se = evens.size();
        if (so > 0 and se > 0 and so + se > 2)
            break;
    }

    if (so == 1)
        OUT(*odds.begin());
    else
        OUT(*evens.begin());
}
