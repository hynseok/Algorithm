#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int dp[1000001];
    int N;
    cin>>N;
    dp[1]=0;
    for(int i=2;i<=N;i++)
    {
        dp[i]=dp[i-1]+1;
        if(i%3==0)dp[i]=min(dp[i/3]+1,dp[i]);
        if(i%2==0)dp[i]=min(dp[i/2]+1,dp[i]);
    }
    cout<<dp[N];
    return 0;
}