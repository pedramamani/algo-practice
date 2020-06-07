//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/50/A

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n % 2 == 1 and m % 2 == 1)
        cout << (n * m - 1) / 2 << endl;
    else
        cout << n * m / 2 << endl;
}