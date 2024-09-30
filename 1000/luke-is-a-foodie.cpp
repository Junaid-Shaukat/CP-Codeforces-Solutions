// Problem link : https://codeforces.com/problemset/problem/1704/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minVal = a[0], maxVal = a[0];
        int changes = 0;

        for (int i = 1; i < n; i++) {
            minVal = min(minVal, a[i]);
            maxVal = max(maxVal, a[i]);

            if (maxVal - minVal > 2 * x) {
                changes++;
                minVal = a[i];
                maxVal = a[i];
            }
        }

        cout << changes << endl;
    }

    return 0;
}