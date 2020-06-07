//
// Created by pedramamani on 2020-06-04.
// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include "cmath"
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    // todo: Is this a better way of writing this? I kept getting overflow errors.
    long long count_n = ceil((double) n / a);
    long long count_m = ceil((double) m / a);
    cout << count_n * count_m;
}
