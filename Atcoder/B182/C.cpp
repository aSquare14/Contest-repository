#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int divisible(string num) 
{ 
    int n = num.length(); 
  
    int sum = accumulate(begin(num), end(num), 0) - '0' * 1; 
    if (sum % 3 == 0) 
        return 0; 
  
    if (n == 1) 
        return -1; 
  
    for (int i = 0; i < n; i++) 
        if (sum % 3 == (num[i] - '0') % 3) 
            return 1; 
   
    if (n == 2) 
        return -1;   
    return 2; 
}
int main() {
    string num; cin>>num;
    int n = num.length();
    if(divisible(num)<=n-1)
        cout<<divisible(num);
    else cout<<-1;
    cout<<endl;
    
}