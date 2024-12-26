// Problem Link : https://codeforces.com/problemset/problem/705/A

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            cout << "I love ";
        else
            cout << "I hate ";

        if (i + 1 == n)
            cout << "it\n";
        else
            cout << "that ";
    }

    return 0;
}