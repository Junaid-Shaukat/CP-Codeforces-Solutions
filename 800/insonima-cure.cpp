// Problem Link : https://codeforces.com/contest/148/problem/A



#include <iostream>
#include <set>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> damagedDragons;

    // Loop over each type of attack interval
    for (int i = k; i <= d; i += k) {
        damagedDragons.insert(i);
    }
    for (int i = l; i <= d; i += l) {
        damagedDragons.insert(i);
    }
    for (int i = m; i <= d; i += m) {
        damagedDragons.insert(i);
    }
    for (int i = n; i <= d; i += n) {
        damagedDragons.insert(i);
    }

    // Output the size of the set which represents the number of damaged dragons
    cout << damagedDragons.size() << endl;

    return 0;
}
