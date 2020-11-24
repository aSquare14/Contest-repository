// https://codeforces.com/blog/entry/78029
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;cin>>N;
    vector<vector<int>> arr;
    for(int i=0;i<N;i++)
    {
        int a,b,c; cin>>a>>b>>c;
        arr.push_back({a,b,c});
    }
    int dp[N][3];
    dp[0][0] = arr[0][0], dp[0][1] = arr[0][1], dp[0][2] = arr[0][2];
    for(int i=1;i<N;i++) {
        dp[i][0] = arr[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = arr[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = arr[i][2] + max(dp[i-1][1],dp[i-1][0]);
    }
    int ans = max(dp[N-1][0],dp[N-1][1]);
    ans = max(ans,dp[N-1][2]);
    cout<<ans<<endl;
}