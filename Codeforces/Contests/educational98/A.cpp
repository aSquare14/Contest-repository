#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;
    vector<int> dp(10001,0);
    for(int i=1;i<=10000;i++)
        dp[i] = 2*i;
    while(t--)
    {
        int x,y; cin>>x>>y;
        if(x==y) {
            cout<<x+y<<endl;
        }
        else if(x<y) {
            int ans = dp[x] + (y-x)*2 - 1;
            cout<<ans<<endl;
        }
        else if(x>y) {
            int ans = dp[y] + (x-y)*2 - 1;
            cout<<ans<<endl;
        }
    }
    return 0;
}