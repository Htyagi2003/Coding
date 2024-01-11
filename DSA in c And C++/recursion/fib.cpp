#include <bits/stdc++.h>
using namespace std;
vector<int> dp(101, -1);
void fib(int n, int a = 0, int b = 1)

{
    if (n > 0)
    {
        cout << a << " ";
        fib(n - 1, b, a + b);
    }
    return;
}
int fib2(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    else
        return dp[n] = (fib2(n - 2) + fib2(n - 1));
}
int main()

{

    cout << fib2(101);
    return 0;
}