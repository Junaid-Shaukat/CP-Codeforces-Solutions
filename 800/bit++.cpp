// Problem Link : https://codeforces.com/contest/282/problem/A

#include <iostream>
using namespace std;
int main()
{

    int t = 0, result = 0;
    cin >> t;

    string input;

    while (t--)
    {
        cin >> input;
        if (input == "X++" || input == "++X")
        {
            result += 1;
        }
        else if (input == "X--" || input == "--X")
        {
            result -= 1;
        }
        else{
            break;
        }
    }
    cout << result;
    return 0;
}
