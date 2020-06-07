//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main() {
    int n, a1, a2, a3, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a1 >> a2 >> a3;
        if (a1 + a2 + a3 >= 2)
            count++;
    }
    cout << count << endl;
}
