#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;cin>>N;
    int K;cin>>K;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    vector<int>dp(N+1,0);
    dp[0] = 0;
    dp[1] = abs(arr[1]-arr[0]);
    for(int i=2;i<=N;i++)
    {
        int y = abs(arr[i]-arr[i-1]) + dp[i-1];
        for(int j=2;j<=K;j++)
        {
            if(i-j>=0)
            {
                int x = abs(arr[i]-arr[i-j]) + dp[i-j];
                y = min(y,x);
            }
        }        
        dp[i] = y;
    }
    cout<<dp[N-1]<<endl;
}