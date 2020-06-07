//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/133/A

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c:s)
        if (c == 'H' or c == 'Q' or c == '9') {
            cout << "YES" << endl;
            return 0;
        }

    cout << "NO" << endl;
}