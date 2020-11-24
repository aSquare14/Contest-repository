#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
unordered_map<int,vector<int>> adj;
unordered_set<int> visited;
unordered_map<int,int> mp; // {student - class}
void dfs(int src,int clss,int &count) {
    if(mp[src]==clss)
        count++;
    visited.insert(src);
    for(auto nb:adj[src]) {
        if(!visited.count(nb))
            dfs(nb,clss,count);
    }
}
void addEdge(int a,int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main() {
    int n; cin>>n;
    int q; cin>>q;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) {
        int c; cin>>c;
        mp[i+1] = c;
    }
    for(int i=0;i<q;i++)
    {
        int query; cin>>query;
        if(query==1) {
            int a,b;
            cin>>a>>b;
            addEdge(a,b);
        }
        else if(query==2) {
            int clss,student;
            cin>>student>>clss;
            int count = 0;
            visited.clear();
            dfs(student,clss,count);
            cout<<count<<endl;
        }
    }
    return 0;
}