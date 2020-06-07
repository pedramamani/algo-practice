//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main() {
    int k, n, w, b;
    cin >> k >> n >> w;

    b = w * (w + 1) / 2 * k - n;
    if (b <= 0)
        cout << 0 << endl;
    else
        cout << b << endl;
}