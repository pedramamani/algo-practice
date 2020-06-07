//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, c, tot = 0, my = 0, cnt = 0;
    list<int> coins;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c;
        coins.push_back(c);
        tot += c;
    }

    coins.sort(greater<>());
    auto it = coins.begin();
    while (my <= tot - my) {
        my += *it;
        advance(it, 1);
        cnt++;
    }

    cout << cnt << endl;
}