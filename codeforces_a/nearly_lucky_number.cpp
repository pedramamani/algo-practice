//
// Created by pedramamani on 2020-06-06.
//

#include <iostream>
#include "cmath"

#define FOR(i, n) for(int i = 0; i < (n); i++)

using namespace std;

int main() {
    int n = 0;
    string s;
    cin >> s;

    for (char c:s) {
        if (c == '4' or c == '7')
            n++;
    }

    if (n == 4 or n == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
