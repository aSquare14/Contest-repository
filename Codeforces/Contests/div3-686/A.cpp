#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<int> arr(n+1,0);
        for(int i=n;i>=1;i--)
                arr[i] = i;
        if(n%2!=0) {
            int mid = (n+1)/2;
            swap(arr[mid],arr[mid-1]);
        }
        for(int i=n;i>=1;i--)
                cout<<arr[i]<<" ";
        cout<<endl;        
    }
}