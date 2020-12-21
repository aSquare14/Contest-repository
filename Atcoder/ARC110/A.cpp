#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(vector<int> &arr) 
{ 
    int n = arr.size();
    // Initialize result 
    ll ans = arr[0]; 
  
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
}
int main() {
    ll n; 
    cin>>n;
    ll ans = 1;
    vector<int> arr;
    for(int i=2;i<=n;i++) {
        arr.push_back(i);
    }
    ans = findlcm(arr);
    cout<<ans+1<<endl;
}