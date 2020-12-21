#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int ans = 0;
void solve(int dest) {
    queue<int> q;
    q.push(0);
    set<int> visited;
    int steps = 0;
    visited.insert(0);
    while(!q.empty()) {
        int n = q.size();
        for(int i=0;i<n;i++) {
            int curr = q.front();
            q.pop();
            cout<<"curr"<<curr;
            if(curr==dest) {
                cout<<steps<<endl;
                return;
            }
            if(!visited.count(curr+steps)) {
                q.push(curr+steps);
            }
            if(!visited.count(curr-1)) {
                q.push(curr-1);
            }
        }
        steps++;
    }
    
}
int main() {
    int t; cin>>t;
    while(t--) {
        int x; cin>>x;
        solve(x);
    }
    return 0;
}