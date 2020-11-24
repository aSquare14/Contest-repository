#include<bits/stdc++.h>
using namespace std;
long long x,num1,num2,ans,t;
int main(){
	int n;cin>>n;
	while(n--){
		cin>>x;
		t+=x; // 2 1 -1
		num1=max(num1,t); // 2, 2, 2
		ans=max(ans,num2+num1); // 2, 4, 5
		num2+=t; // 2, 3, 2
	}
	cout<<ans;
}