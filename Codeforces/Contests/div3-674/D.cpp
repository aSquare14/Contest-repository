#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    ll n; cin>>n;
    set<ll> prefix;
    ll sum = 0;
    ll count = 0;
    prefix.insert(0);
    for(int i=0;i<n;i++)
    {
        ll it; cin>>it;
        sum+=it;
        if(prefix.count(sum)) {
            count++;
            prefix.clear(); // remove left side of array
            prefix.insert(0); // {5,-5}
            sum = it; // start from curr element
        }
        prefix.insert(sum);
    }
    cout<<count<<endl;
}