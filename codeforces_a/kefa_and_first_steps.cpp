//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/580/A

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
    int n, a, a_prev = 0, cnt = 0, cnt_max = 0;
    cin >> n;

    FOR (i, n) {
        cin >> a;
        if (a >= a_prev)
            cnt++;
        else {
            if (cnt > cnt_max) cnt_max = cnt;
            cnt = 1;
        }
        a_prev = a;
    }
    if (cnt > cnt_max) cnt_max = cnt;
    OUT (cnt_max);
}