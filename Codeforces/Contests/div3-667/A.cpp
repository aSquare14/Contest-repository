#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int a,b; cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else
        {
            int diff = abs(b-a);
            if(diff<=10)
                cout<<1<<endl;
            else 
            {
                int x = diff/10;
                int y = diff%10;
                if(diff%10!=0)
                    cout<<x+1<<endl;
                else 
                    cout<<x<<endl;
            }
                
        }
    }
}
