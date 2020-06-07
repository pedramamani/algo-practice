//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/977/A

#include <iostream>

using namespace std;

int main() {
    int num, n, r;
    cin >> num >> n;

    for (int i = 0; i < n; i++) {
        r = num % 10;
        if (r == 0)
            num /= 10;
        else
            num -= 1;
    }

    cout << num << endl;
}