#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;cin>>N;
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
        int x = abs(arr[i]-arr[i-2]) + dp[i-2];
        int y = abs(arr[i]-arr[i-1]) + dp[i-1];
        dp[i] = min(x,y);
    }
    cout<<dp[N-1]<<endl;
}