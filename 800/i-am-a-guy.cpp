// Problem Link : https://codeforces.com/contest/469/problem/A

#include <vector>
#include <iostream>
#include <set>
using namespace std;

int main() {
        int n;
        cin>>n;
        int a;
        cin>>a;
        vector <int> sajid(a);  
        for(int i=0;i<a;i++){
            cin>>sajid[i];
        }
        int b;
        cin>>b;
        vector <int> majid(b);
        for(int i=0;i<b;i++){
            cin>>majid[i];
        }
        set<int> nateeja;
        for(auto a:sajid)
        {
            nateeja.insert(a);
        }
        for(auto a:majid)
        {
            nateeja.insert(a);
        }
        if(nateeja.size() == n) cout<<"I become the guy."<<endl;
        else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
