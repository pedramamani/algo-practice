//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/116/A

#include <iostream>

using namespace std;

int main() {
    int n, a, b, cap = 0, cur = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (cur > cap)
            cap = cur;
        cur += b - a;
    }

    cout << cap << endl;
}
