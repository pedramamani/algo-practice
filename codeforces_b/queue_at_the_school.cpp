//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)

using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;

    FOR(j, t) {
        FOR(i, n - 1) {
            if (s[i] == 'B' and s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s << endl;
}