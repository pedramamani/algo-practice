//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/112/A

#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    char c1, c2;
    int out = 0;
    cin >> s1 >> s2;

    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        c1 = (char) tolower(s1[i]);
        c2 = (char) tolower(s2[i]);

        if (c1 > c2)
            out = 1;
        else if (c1 < c2)
            out = -1;
        if (out != 0)
            break;
    }

    if (out == 0 and s1.length() > s2.length())
        out = 1;
    else if (out == 0 and s1.length() < s2.length())
        out = -1;
    cout << out << endl;
}