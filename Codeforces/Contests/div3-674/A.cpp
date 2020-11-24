#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,x; cin>>n>>x;
        if(n<=2) {
            cout<<1<<endl;
            continue;
        }
        else {
           int j = 1;
           int floor = 2;
           for(int i=3;i<=n;i++) {
               if(i==n) {
                    cout<<floor<<endl;
               }
               if(j==x)
               {
                   floor++;
                   j=0;
               }
               j++;
           }
        }
    }
}