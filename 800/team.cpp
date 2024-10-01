// problem link : https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p,v,t,res=0;

cin>>n;

for(int i = 0;i<n;i++){
    cin>>p>>v>>t;
if((p==1 && v==1) || (t==1&&p==1) || (t==1&&v==1))
{   
    res++;
}

}
cout<<res;


    return 0;
}
