// problem link : https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;  // Read the input string
    int l = s.length();  // Get the length of the string

    if (l <= 10) {
        // If the word length is 10 or less, print the word as is
        cout << s << endl;
    } else {
        // If the word length is more than 10, print the abbreviation
        cout << s[0] << l - 2 << s[l - 1] << endl;
    }
}

int main() {
    int testcases;
    cin >> testcases;  // Read number of test cases

    while (testcases--) {
        solve();  // Call solve() function for each test case
    }

    return 0;
}
