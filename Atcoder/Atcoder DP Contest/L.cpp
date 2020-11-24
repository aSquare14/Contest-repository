// g++ G.cpp -std=c++1z
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(vector<ll> &a,ll l,ll r,vector<vector<ll>> &dp) {
    if(l>r) {
        return 0;
    }
    if(l==r) {
        return a[l];
    }
    if(dp[l][r]!=-1)
        return dp[l][r];
    ll choice1 = a[l] - solve(a,l+1,r,dp);
    ll choice2 = a[r] - solve(a,l,r-1,dp);
    ll ans = max(choice1,choice2);
    dp[l][r] = ans;
    return ans;
}
int main() {
    int N; cin>>N;
    vector<ll> a(N,0);
    for(int i=0;i<N;i++)
        cin>>a[i];
    vector<vector<ll>> dp(N+1, vector<ll> (N+1, -1));
    // cout<<solve(a,0,N-1,dp);
    ll n = N;
    for(int L=n-1;L>=0;L--)
    {
        for(int R=L;R<n;R++)
        {
            if(L==R)
            {
                dp[L][R] = a[L];
            }
            else
            {
                dp[L][R] = max(a[L]-dp[L+1][R],a[R]-dp[L][R-1]);
            }
            
        }
    }
    cout<<dp[0][n-1]<<endl;
}