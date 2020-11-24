#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    if(n==1)
    {
        cout<<a[0]<<endl;
        return 0;
    }
    int ans = 1;
    int idx = 1;
    for(int i=2;i<=1000;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(i<=a[j] && a[j]%i==0)
                count++;
        }
        if(count>ans) {
            ans = count;
            idx = i;
        }
    }
    cout<<idx<<endl;
    return 0;
}