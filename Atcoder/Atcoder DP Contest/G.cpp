#include<bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<int,vector<int>> adj;
vector<bool> visited;
vector<int> dp;
int ans = INT_MIN;
int dfs(int source) {
    if(dp[source]!=-1)
        return dp[source];
    visited[source] = true;
    for(auto nb:adj[source]) {
        if(!visited[nb])
            dp[source] =  max(dp[source],1+ dfs(nb));
    }
    visited[source] = false;   
    return dp[source];
}
int main() {
 
    int V,E; cin>>V>>E;
    for(int i=1;i<=V;i++)
        adj[i] = {};
    for(int i=0;i<E;i++){
        int v1,v2; cin>>v1>>v2;
        adj[v1].push_back(v2);
    }
    visited.resize(V+1);
    dp.resize(V+1,-1);
    for(int i=1;i<=V;i++)
        if(adj[i].size()>0 && !visited[i])
           ans = max(ans,dfs(i));
    cout<<ans+1<<endl;
}