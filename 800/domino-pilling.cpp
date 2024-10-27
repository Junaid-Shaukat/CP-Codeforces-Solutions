// Problem Link : https://codeforces.com/contest/50/problem/A

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    // Calculate the maximum number of dominoes that can fit
    int maxDominoes = (M * N) / 2;
    
    cout << maxDominoes << endl;
    
    return 0;
}
