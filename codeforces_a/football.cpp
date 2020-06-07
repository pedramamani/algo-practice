//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/96/A

#include <iostream>

using namespace std;

int main() {
    string p;
    cin >> p;

    char prev_c = p[0];
    int cnt = 0;

    for (char c: p) {
        if (c == prev_c)
            cnt++;
        else
            cnt = 1;
        if (cnt >= 7)
            break;
        prev_c = c;
    }

    if (cnt >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}