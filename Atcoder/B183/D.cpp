#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    ll n,w;
    cin>>n>>w;
    vector<pair<int,int>> events;
    for(int i=0;i<n;i++) 
    {
        int s,t,p; 
        cin>>s>>t>>p;
        events.push_back({s,p});
        events.push_back({t,-p});
    }
    sort(events.begin(),events.end());
    ll balance = 0;
    for(auto event:events)
    {
        balance += event.second;
        if(balance>w)
            {
                cout<<"No";
                return 0;
            }
    }
    cout<<"Yes";
    return 0;
}