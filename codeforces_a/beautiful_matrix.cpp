//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/263/A

#include <iostream>

using namespace std;

int main() {
    int entry, row, col;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cin >> entry;
            if (entry == 1) {
                row = i;
                col = j;
            }
        }

    cout << abs(row - 2) + abs(col - 2) << endl;
}
