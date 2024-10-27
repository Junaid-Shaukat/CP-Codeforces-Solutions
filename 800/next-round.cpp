#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);

    // Read the scores
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    // Get the k-th place score (1-based index, so k-1)
    int threshold_score = scores[k - 1];
    int count = 0;

    // Count participants with score >= threshold_score and > 0
    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold_score && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
