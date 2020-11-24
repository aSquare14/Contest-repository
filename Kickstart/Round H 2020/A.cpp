#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int T; cin>>T;
    for(int t=0;t<T;t++) {
        
        ll n,k,s; cin>>n>>k>>s;
        // restart
        ll t1 = (k-1) + n + 1;
        //cout<<t1<<endl;
        // move back
        ll t2 = (k-1) + (k-s) + (n-s) + 1;
        //cout<<t2<<endl;
        cout<<"Case #"<<t+1<<": ";
        cout<<min(t1,t2)<<endl;
    }
    return 0;
}