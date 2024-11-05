// Problem Link : https://codeforces.com/contest/1030/problem/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool is_hard = false;
    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion;

        if (opinion == 1) {
            is_hard = true;
            break;
        }
    }

    if (is_hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}