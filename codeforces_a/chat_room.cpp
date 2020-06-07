//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/58/A

#include <iostream>

using namespace std;

int main() {
    string s;
    string h = "hello";
    cin >> s;

    int i = 0;
    for (char c:s) {
        if (c == h[i])
            i++;
        if (i == h.length())
            break;
    }

    if (i == h.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}