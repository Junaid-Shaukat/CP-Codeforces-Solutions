// Problem Link : https://codeforces.com/contest/110/problem/A

#include <iostream>
#include <string>
using namespace std;

// Function to check if a number (given as a string) is a lucky number
bool isLucky(int count) {
    string countStr = to_string(count);
    for (char ch : countStr) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    // Input number
    string n;
    cin >> n;

    // Count lucky digits (4 and 7)
    int luckyCount = 0;
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            luckyCount++;
        }
    }

    // Check if the count of lucky digits is a lucky number
    if (isLucky(luckyCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

