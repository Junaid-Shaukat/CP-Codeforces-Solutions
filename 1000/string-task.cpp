// Problem Link : https://codeforces.com/contest/118/problem/A

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
   string input, result;
    cin >> input;

    // Define vowels for both lowercase and uppercase
    string vowels = "aoyeuiAOYEUI";

    for (char c : input) {
        // Convert to lowercase for uniformity
        c = tolower(c);
        
        // Check if character is a consonant
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
