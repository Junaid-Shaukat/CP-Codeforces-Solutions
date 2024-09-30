// Problem Link : https://codeforces.com/problemset/problem/1691/B


#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int n;
    cin>>n;
    vector<int> s(n);
    map<int,int> mp;

    for(auto &i:s){
        cin>>i;
        mp[i]++;
    }

    for(auto it:mp){
        if(it.second==1){
            cout<<"-1\n";
            return;
        }
    }
    vector<int> per(n);
    for(int i = 0;i<n;i++){
        int a = i+1;
        while(i+1<n && s[i]==s[i+1]){
                    per[i]=i+2;
                    i++;
        }
        per[i]=a;

    }
    for(auto i:per){
        cout<<i<<" ";
    }
    cout<<"\n";

}

int main()
{
        int testcases = 1;
        cin>>testcases;
        while(testcases--){
            Solve();
        }
            return 0;
}