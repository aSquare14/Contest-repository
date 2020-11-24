// https://www.youtube.com/watch?v=XHjjIJxnAJY&feature=emb_logo&ab_channel=CodingBlocks
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll mod = 1000000007;
ll csum(vector<ll> &a,ll l,ll r) {
    ll sum = 0;
    for(int i=l;i<=r;i++) {
        sum=sum+(a[i]);
    }
    return sum;
}
ll solve(vector<ll> &arr,vector<vector<ll>> &dp,int l,int r) {
    if(dp[l][r]!=-1) {
        return dp[l][r];
    }
    if(l==r) {
        return dp[l][r]=0;
    }
    ll ret = dp[l][r];
    for(int i=l;i+1<=r;i++) {
        ll temp = solve(arr,dp,l,i) + solve(arr,dp,i+1,r) + csum(arr,l,r);
         if(ret==-1||temp<ret)
			ret=temp;
    }
    return (dp[l][r]=ret);
 
}
int main() {
    int N; cin>>N;
    vector<ll> arr(N,0);
    for(int i=0;i<N;i++)
        cin>>arr[i];
    vector<vector<ll>> dp(N+1, vector<ll> (N+1, -1));
    cout<<solve(arr,dp,0,N-1);
}