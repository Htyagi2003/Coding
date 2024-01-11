#include <bits/stdc++.h>
using namespace std;
int solve(int A[], int K, int N)
{
    int i = 0;
    int j = 0;
    int maxLen = INT_MIN;
    int sum = 0;

    while (j < N)
    {
        sum += A[j]; // calculation
        if (sum == K)
        {
            maxLen = max(maxLen, j - i + 1); // taking results
            j++;
        }
        else if (sum < K)
        { // adjusting window
            j++;
        }
        else if (sum > K)
        { // adjusting window
            while (sum > K)
            {
                sum -= A[i];
                i++;
            }
            if (sum == K)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            j++;
        }
    }
    return maxLen;
}

int main()
{
    int K, N;
    cout << "Enter the number of elements" << endl;
    cin >> N;
    int ip[N];
    cout << "Enter the Elements of array" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> ip[i];
    }
    cout << "Enter the sum you want" << endl;
    cin >> K;
    int ans = solve(ip, K, N);
    cout << "Longest Subarray size is:--";
    cout << ans << endl;
}