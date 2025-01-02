// Problem Link : https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile && !outFile)
    {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i = 0;i<n;i++) cin>>arr[i];

        if(is_sorted(arr,arr+n) || k>1 ) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
