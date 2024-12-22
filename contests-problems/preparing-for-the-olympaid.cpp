// Problem Link : https://codeforces.com/contest/2051/problem/A

#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    vector<int> m(n);
    vector<int> s(n+2);
    for(int i=0;i<n;i++) {
        cin>>m[i];

    }
    for(int i=0;i<n;i++) {
        cin>>s[i];
    }
    if(m.size() == 1) {cout<<m[0]<<endl; return;}
    int sum=0;
    s[n+1] = 0;
    for(int i=0;i<n;i++) {
        if(m[i]- s[i+1]>0) {
            sum += (m[i]-s[i+1]);
        }
    }
    cout<<sum<<endl;
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