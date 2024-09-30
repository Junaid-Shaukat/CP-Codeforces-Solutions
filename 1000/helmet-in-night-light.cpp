// problem link : https://codeforces.com/problemset/problem/1876/A


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#include <algorithm>
#include <vector>
#include <map>
 
 
void  solve(){
	
int n ,ch_cost;
cin>>n>>ch_cost;
 
vector<pair<int,int>> cost_range(n);
 
 
 
for(auto &it:cost_range)
{
	cin>>it.second;
}
for(auto &it:cost_range)
{
	cin>>it.first;
}
sort(cost_range.begin(),cost_range.end());
int pando=1;
int cost=ch_cost;
for(auto it:cost_range)
{
	int pando_cost=it.first;
	int pado_range=it .second;	
	if(pando_cost>ch_cost)
	{
		break;
	}
	cost=cost+pando_cost*min(pado_range,n-pando);
	pando=pando+min(pado_range,n-pando);
	
}
if(pando<n)
{
	cost=cost+(n-pando)*ch_cost;
}
cout<<cost<<endl;
 
 
	
}
 
 
 
 
 
 
 
 
int32_t main()
{
	int testcases=1;
	cin>>testcases;
	while(testcases--)
	{
		solve();
	}
 
return 0;
	
}