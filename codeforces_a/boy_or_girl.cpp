//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <set>

using namespace std;

int main() {
    string u;
    set<char> cs;
    cin >> u;

    for (char c:u)
        cs.insert(c);

    if (cs.size() % 2 == 1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
}