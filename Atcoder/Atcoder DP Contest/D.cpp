#include<bits/stdc++.h>
using namespace std;
#define ll long long

// ll knapsackRecursive(ll n,ll W,vector<ll> &wt,vector<ll> &val,vector<vector<ll>> &dp) {
//    if(W<=0 || n < 0)
//         return 0;
//     if(wt[n-1]>W)
//         return knapsackRecursive(n-1,W,val,wt,dp);
    
//     ll include = knapsackRecursive(n-1,W-wt[n-1],val,wt,dp) + val[n-1];
//     ll exclude = knapsackRecursive(n-1,W,val,wt,dp);
//     return max(include,exclude);
// }
ll knapsack(ll n,ll W,vector<ll> &wt,vector<ll> &val) {
    long long int dp[n + 1][W + 1]; 
	for (int i = 0; i <= n; i++) { 
		for (int w = 0; w <= W; w++) { 
			if (i == 0 || w == 0) 
				dp[i][w] = 0; 
			else if (wt[i - 1] <= w) 
				dp[i][w] = max( 
					val[i - 1] + dp[i - 1][w - wt[i - 1]], 
					dp[i - 1][w]); 
			else
				dp[i][w] = dp[i - 1][w]; 
		} 
	}
    return dp[n][W];
}
int main() {
    ll N,W; cin>>N>>W;
    vector<ll> wt(N+1,0);
    vector<ll> val(N+1,0);
    for(ll i=0;i<N;i++) {
        cin>>wt[i]>>val[i];
    }
	// vector<vector<ll>> dp(val.size(), vector<ll>(W, -1));
    // cout<<knapsackRecursive(N-1,W,wt,val,dp)<<endl;
    cout<<knapsack(N,W,wt,val)<<endl;
    return 0;
}