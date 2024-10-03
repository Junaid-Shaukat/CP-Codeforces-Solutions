// problem link : https://codeforces.com/contest/1/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,m,a;
cin>>n>>m>>a;

 long long ab = ((m+a-1)/a)*((n+a-1)/a);
 cout<<ab;

return 0;
	
}
