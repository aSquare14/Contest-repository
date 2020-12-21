#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    set<pair<int,int>> p;
    ll n; cin>>n;
    vector<ll> arr(n+1);
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
        p.insert({i,i+1});
    }
    p.erase({n,n+1});

    vector<ll> ans;
    bool flag = 0;
    while(p.size()>0) {
        for(int i=1;i<n;i++) {
            if(arr[i]>=arr[i+1] && p.count({i,i+1})) {
                ans.push_back(i);
                swap(arr[i],arr[i+1]);
                p.erase({i,i+1});
            }
            if(arr[i]>=arr[i+1] && !p.count({i,i+1})) {
                flag = 1;
                break;
            }
            if(p.size()==0) {
                break;
            }
        }
    }
  
    for(int i=1;i<n;i++) {
        if(arr[i]>arr[i+1]) {
            flag = 1;
            break;
        }
     }
     
     if(flag) {
         cout<<-1<<endl;
     }
     else {
         for(int i=0;i<ans.size();i++) {
             cout<<ans[i]<<endl;
         }
     }
     return 0;
}