#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int nroot = floor(sqrt(n));
        
        if(nroot*nroot >= n)
        {
            cout << 2*nroot-2 << "\n";
            
        }
        else if((nroot+1)*nroot >= n)
        {
            cout << 2*nroot-1 << "\n";
            
        }
        else{
            cout << 2*nroot << "\n";
            
        }
    }
    return 0;
}