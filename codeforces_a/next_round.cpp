//
// Created by pedramamani on 2020-06-04.
// https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main() {
    int n, k, s, prev_s, count = 0;
    cin >> n >> k;

    if (n == 0) {
        cout << count << endl;
        return 0;
    }

    do {
        cin >> s;
        if (s > 0 and (count < k or prev_s == s))
            count++;
        else
            break;
        prev_s = s;
    } while (count < n);

    cout << count << endl;
}
