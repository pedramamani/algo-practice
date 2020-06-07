//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/122/A

#include <iostream>

using namespace std;

int main() {
    int lucky_ns[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n;
    cin >> n;

    for (int lucky_n:lucky_ns)
        if (n % lucky_n == 0) {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;
}