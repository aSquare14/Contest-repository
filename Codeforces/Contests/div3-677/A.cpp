#include<bits/stdc++.h>
using namespace std;
int sum[5] = {0,1,3,6,10};
int main() {
    int t; cin>>t;
    while(t--) {
        string a; cin>>a;
        int len = a.length();
        int ans = 0;
        int x = a[0]-'0';
        ans = sum[4]*(x-1) + sum[len];
        cout<<ans<<endl;

    }
}