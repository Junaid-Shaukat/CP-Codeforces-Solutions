// Problem Link : https://codeforces.com/contest/271/



#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit) > 0)
            return false;
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int findNextDistinctYear(int year) {
    while (true) {
        year++;
        if (hasDistinctDigits(year))
            return year;
    }
}

int main() {
    int y;
    cin >> y;
    cout << findNextDistinctYear(y) << endl;
    return 0;
}
