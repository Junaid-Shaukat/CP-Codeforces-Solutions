// Problem Link : https://codeforces.com/contest/41/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Reverse the first string
    reverse(s.begin(), s.end());

    // Check if the reversed first string equals the second string
    if (s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
