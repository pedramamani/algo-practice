//
// Created by pedramamani on 2020-06-07.
// https://codeforces.com/problemset/problem/469/A

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
    set<int> passed;
    int p, n, l;
    cin >> n;

    FOR (j, 2) {
        cin >> p;
        FOR (i, p) {
            cin >> l;
            passed.insert(l);
        }
    }
    if (passed.size() == n)
        OUT("I become the guy.");
    else
        OUT("Oh, my keyboard!");
}