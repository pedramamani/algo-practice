//
// Created by pedramamani on 2020-06-06.
// https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define OUT(s) cout << (s) << endl
#define C2L(c) (c) = (char) tolower(c)
#define C2U(c) (c) = (char) toupper(c)

using namespace std;

int main() {
    string s;
    int n, a = 0, d = 0;
    cin >> n >> s;

    for (char c:s) {
        if (c == 'A')
            a++;
        else if (c == 'D')
            d++;
    }

    if (a == d)
        OUT("Friendship");
    else if (a > d)
        OUT("Anton");
    else
        OUT("Danik");
}
