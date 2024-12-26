#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the length of the array
        vector<int> a(n);
        set<int> unique_values; // To store unique values

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the array elements
            unique_values.insert(a[i]); // Insert into the set
        }

        // Count unique values greater than 0
        int operations_needed = 0;
        for (int value : unique_values) {
            if (value > 0) {
                operations_needed++;
            }
        }
        cout << operations_needed << endl; // Output the result for the test case

    }
    return 0;
}