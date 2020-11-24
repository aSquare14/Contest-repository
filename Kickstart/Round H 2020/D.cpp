#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
int bfs(int s,int dest, int V,unordered_map<int,vector<int>> &adj) {
        queue<int> q;
    vector<bool> used(V);
    vector<int> d(V), p(V);
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                // stores distance
                d[u] = d[v] + 1;
                // stores immediate pre-decessor
                p[u] = v;
            }
        }
    }
    //Print Shortest Path
    int ans = -1;
    if (!used[dest]) {
        return ans;
    } 
    else {
        vector<int> path;
        for (int v = dest; v != -1; v = p[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        ans = path.size();
        return ans;
        // cout << "Path: ";
        // cout<<
        // for (int v : path)
        //     cout << v << " ";
    }
    return ans;
}
bool isCommon(string a, string b) {
    set<char> unq;
    for(auto c:a)
        unq.insert(c);
    for(auto c:b)
        if(unq.count(c))
            return true;
    unq.clear();
    for(auto c:b)
        unq.insert(c);
    for(auto c:a)
        if(unq.count(c))
            return true;
    return false;
}
void addEdge(int node1,int node2,unordered_map<int,vector<int>> &adj) {
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}
int main() {
    int T; cin>>T;
    for(int t=0;t<T;t++) {
        int n; int q;
        cin>>n;
        cin>>q;
        vector<string> arr(n,"");
        for(int i=0;i<n;i++)
            cin>>arr[i];
        // Create Graph
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(isCommon(arr[i],arr[j]))
                    addEdge(i+1,j+1,adj);
            }
        }
        cout<<"Case #"<<t+1<<": ";
        while(q--) {
            int start,end; cin>>start>>end;
            cout<<bfs(start,end,n+1,adj)<<" ";
        }
        cout<<endl;
    }
    return 0;
}