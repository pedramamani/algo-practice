//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/158/B


#include <iostream>
#include "cmath"

using namespace std;

int main() {
    int n, s, taxis = 0, temp;
    int groups[] = {0, 0, 0, 0};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        groups[s - 1] += 1;
    }

    // todo: Perhaps there is an easier way to do this...
    taxis += groups[3];
    groups[3] = 0;

    temp = min(groups[0], groups[2]);
    taxis += temp;
    groups[0] -= temp;
    groups[2] -= temp;

    taxis += groups[1] / 2;
    groups[1] %= 2;

    if (groups[1] > 0) {
        groups[0] -= min(2, groups[0]);
        groups[1] = 0;
        taxis += 1;
    }

    if (groups[0] > 0) {
        taxis += ceil((double) groups[0] / 4);
        groups[0] = 0;
    } else if (groups[2] > 0) {
        taxis += groups[2];
        groups[2] = 0;
    }

    cout << taxis << endl;
}
