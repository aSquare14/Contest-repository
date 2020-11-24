#include <bits/stdc++.h>
#define ll long long
const unsigned int MOD = 1e9 + 7;
using namespace std;
/*
0 + 0 = 1
1 + 1 = 2
2 + 2 = 3
3 + 3 = 4
4 + 4 = 5
*/
int main() {
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            ll x; cin>>x;
            mp[x]++;
        }
        if(mp.size()!=n)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}