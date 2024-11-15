// Problem Link : https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        int countZero = 0;
        int countOne = 0;
        countZero = count(s.begin(), s.end(), '0');
        countOne = s.size() - countZero;
        int i;
        for(i = 0; i < s.size(); i++) {
            if(s[i] == '0') {
                if(countOne == 0) break;
                countOne--;
            }
            else if(s[i] == '1') {
                if(countZero == 0) break;
                countZero--;
            }
        }
        cout << s.size() - i << '\n';
    }

    return 0;
}