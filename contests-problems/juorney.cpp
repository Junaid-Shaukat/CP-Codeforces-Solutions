// Problem Link : https://codeforces.com/contest/2051/problem/B


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        
        long long d = a + b + c;

        long long f = n / d;
        long long total = f * d;
        int day = f * 3;

        if (total >= n) {
            cout << day << "\n";
            continue;
        }

        total += a;
        day++;
        if (total >= n) {
            cout << day << "\n";
            continue;
        }

        total += b;
        day++;
        if (total >= n) {
            cout << day << "\n";
            continue;
        }

        total += c;
        day++;
        if (total >= n) {
            cout << day << "\n";
        }
    }

    return 0;
}
