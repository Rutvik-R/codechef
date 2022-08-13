#include <bits/stdc++.h>
using namespace std;

int f(int n, int dp[])
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        dp[n] = f(n - 2, dp) + f(n - 1, dp);
        return dp[n];
    }
}

int main()
{
    int t, n, dumi, d;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        d = n;
        d = (n / 2)*2;
        int dp[d];
        memset(dp, -1, sizeof dp);
        cout << f(d - 1, dp) % 10 << endl;
        break;
    }
    return 0;
}