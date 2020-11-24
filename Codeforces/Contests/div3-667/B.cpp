#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        ll a,b,x,y,A,B,n;
        cin>>a>>b>>x>>y>>n;
        A=a,B=b;
        ll e=min(n,A-x);
        A-=e;
        B-=(n-e);
        B=max(B,y);
        ll ans=A*B;
        A=a,B=b;
        swap(A,B);
        swap(x,y);
        e=min(n,A-x);
        A-=e;
        B-=(n-e);
        B=max(B,y);
        ans=min(ans,A*B);
        cout<<ans<<"\n";

        /*
            c - d =  (a-b) - (x-y)
            c + d = n
            2c = (a-b) - (x-y) + n
            ans = (a-c)*(b-d)
        */
    }
}