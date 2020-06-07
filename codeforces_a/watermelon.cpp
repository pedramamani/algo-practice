//
// Created by pedramamani on 2020-06-04.
// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w >= 4 and w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}