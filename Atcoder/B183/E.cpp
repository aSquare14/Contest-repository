#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
 
int dp[2005][2005];
int pre1[2005][2005];
int pre2[2005][2005];
int pre3[2005][2005];

int main() {
    int n,m;
    cin>>n>>m;
    string a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]="#"+a[i];
    }
    dp[1][1]=1;
    pre1[1][1]=1;
    pre2[1][1]=1;
    pre3[1][1]=1;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1 &&j==1)
                continue;
            if(a[i][j]=='#')
                continue;
            pre1[i][j]+=pre1[i-1][j];
            pre2[i][j]+=pre2[i][j-1];
            pre3[i][j]+=pre3[i-1][j-1];
            pre1[i][j]%=mod;
            pre2[i][j]%=mod;
            pre3[i][j]%=mod;
            dp[i][j]=(pre1[i][j]+pre2[i][j]+pre3[i][j])%mod;
            pre1[i][j]+=dp[i][j];
            pre2[i][j]+=dp[i][j];
            pre3[i][j]+=dp[i][j];
            pre1[i][j]%=mod;
            pre2[i][j]%=mod;
            pre3[i][j]%=mod;
        }
    }
 
    cout<<dp[n][m];
}