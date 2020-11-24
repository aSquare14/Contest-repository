#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    int a,b; cin>>a>>b;
    int limit = 2*a + 100;
    int extra = limit - b;
    cout<<extra<<endl;
    return 0;

}