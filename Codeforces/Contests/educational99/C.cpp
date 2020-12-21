#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
pair<int,int> solve(int x,int y)
{
	pair<int,int> ans={0,0};
	if(x==0) return {0,y};
	if(y==0) return {x,0};
	return {x-1,y};
}
int main() {
    int t; cin>>t;
    while(t--) {
        int x,y; cin>>x>>y;
        pair<int,int> ans=solve(x,y);
		cout<<ans.first<<" "<<ans.second<<endl;
    }
    return 0;
}