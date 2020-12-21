#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;  
    while(t--) {
        int n; cin>>n;
        unordered_map<int,int> m1;
        set<int> s;
        unordered_map<int,int> m2;
        unordered_map<int,int> m3;
        for(int i=1;i<=n;i++) {
            int x; cin>>x;
            m1[i] = x;
            m3[x] = i;
            s.insert(x);
            m2[x]++;
        }
        int ans = -1;
        for(auto num:s) {
            if(m2[num]==1) {
                ans = m3[num];
                break;
            }
        }
        cout<<ans<<" ";
    }
}