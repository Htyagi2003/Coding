#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // double x = (n * 20) / 100;
        // double d = ceil(100 * 1.0 / x);
        cout << ceil(10000 / (n * 20 * 1.0)) << endl;
    }
    return 0;
}