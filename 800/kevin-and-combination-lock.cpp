#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    long long n;
    cin>>n;
    if(n%33 ==0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t=1;
    cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}