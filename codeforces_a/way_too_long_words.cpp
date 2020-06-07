//
// Created by pedramamani on 2020-06-04.
// https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main() {
    int n;
    string word;
    cin >> n;

    // todo: Why can I not test this in IDE?
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() <= 10)
            cout << word << endl;
        else
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    }
}
