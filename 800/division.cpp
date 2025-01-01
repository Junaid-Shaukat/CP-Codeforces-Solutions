// Problem Link : https://codeforces.com/contest/1669/problem/A



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

int t; cin >> t;
while (t--)
{
 int rating;
 cin>>rating;
 
 if (rating <= 1399)
 {
    cout<<"Division 4\n";
 }
 else if (rating >= 1400 && rating <= 1599)
 {
    cout<<"Division 3\n";
 }
 else if (rating >= 1600 && rating <= 1899)
 {
    cout<<"Division 2\n";
 }
 else if(1900<=rating){
    cout<<"Division 1\n";
 }

}

}
