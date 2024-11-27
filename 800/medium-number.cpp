// Problem Link : https://codeforces.com/contest/1760/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;  // Input three distinct integers
        
        // Find the medium number
        if ((a > b && a < c) || (a > c && a < b))
            cout << a << endl;
        else if ((b > a && b < c) || (b > c && b < a))
            cout << b << endl;
        else
            cout << c << endl;
    }
    
    return 0;
}
