//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/266/A

#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    string s;
    char prev;
    cin >> n >> s;

    for (char c: s) {
        if (c == prev)
            cnt++;
        else
            prev = c;
    }
    cout << cnt << endl;
}