//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/69/A

#include <iostream>

using namespace std;

int main() {
    int n, x, y, z;
    int x_tot = 0, y_tot = 0, z_tot = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        x_tot += x;
        y_tot += y;
        z_tot += z;
    }

    if (x_tot == 0 and y_tot == 0 and z_tot == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}