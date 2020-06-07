//
// Created by pedramamani on 2020-06-05.
// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <list>

using namespace std;

int main() {
    string s, out;
    list<char> nums;  // todo: Would it be better to use array here instead?
    cin >> s;

    for (int i = 0; i <= s.length() / 2; i++)
        nums.push_back(s[2 * i]);
    nums.sort();

    for (char num : nums) {
        out += num;
        out += '+';
    }

    out.pop_back();
    cout << out << endl;
}