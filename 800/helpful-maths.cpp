// Problem Links : https://codeforces.com/contest/339/problem/A


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Extract the numbers and store them in a string without '+'
    string numbers;
    for (char ch : s) {
        if (ch != '+') {
            numbers += ch;
        }
    }

    // Sort the extracted numbers
    sort(numbers.begin(), numbers.end());

    // Rebuild the sorted string with '+' between numbers
    string result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result += numbers[i];
        if (i < numbers.size() - 1) {
            result += '+';
        }
    }

    cout << result << endl;
    return 0;
}
