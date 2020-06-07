//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/282/A

#include "cstdio"
#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    string c;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c[0] == '-' or c[1] == '-')
            x--;
        else if (c[0] == '+' or c[1] == '+')
            x++;
    }
    cout << x << endl;
}