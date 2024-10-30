// Problem Links : https://codeforces.com/contest/546/problem/A


#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost for w bananas
    int totalCost = k * (w * (w + 1)) / 2;

    // Calculate the amount to borrow
    int amountToBorrow = totalCost - n;

    // If the amount to borrow is negative, it means he doesn't need to borrow any money
    cout << (amountToBorrow > 0 ? amountToBorrow : 0) << endl;

    return 0;
}
