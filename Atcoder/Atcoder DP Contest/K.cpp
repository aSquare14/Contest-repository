#include<bits/stdc++.h>
using namespace std;
#define ll long long
// dp[i] tells if first player wins and i stones left
int main() {
    int N,K; cin>>N>>K;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++)
        cin>>arr[i];
    vector<bool> dp(K+1,false);
    for(int i=0;i<=K;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i-arr[j]<0)
                break;
            else if(i>=arr[j] && dp[i-arr[j]]==false)
            {
                dp[i] = true;
                break;
            }
        }
    }
    if(dp[K])
        cout<<"First";
    else cout<<"Second";
    return 0;
}