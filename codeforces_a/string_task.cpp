//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/118/A

#include <iostream>
using namespace std;

int main() {
    string in, out;
    bool is_vowel;
    char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
    cin >> in;

    for (char c : in) {
        c = (char) tolower(c);
        is_vowel = false;

        for (char v : vowels)
            if (c == v) {
                is_vowel = true;
                break;
            }

        if (not is_vowel) {
            out += '.';
            out += c;
        }
    }
    cout << out << endl;
}
