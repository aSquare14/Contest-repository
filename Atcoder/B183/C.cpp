#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result) {
		if (begin >= num.size()) {
		    result.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
		    permuteRecursive(num, begin + 1, result);
		    // reset
		    swap(num[begin], num[i]);
		}
}
vector<vector<int> > permute(vector<int> &num) {
	vector<vector<int> > result;
	permuteRecursive(num, 0, result);
	return result;
}

int main() {
    ll n; cin>>n; 
    ll k; cin>>k;
    ll cost[n+1][n+1];
    memset(cost,0,sizeof(cost));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) {
            cin>>cost[i][j];
        }
    }
    vector<int> t;
    for(int i=2;i<=n;i++)
        t.push_back(i);
    ll ans = 0;
    vector<vector<int>> temp = permute(t);
    for(auto a:temp)
    {
        int n = a.size();
        ll score = cost[1][a[0]];
        for(int i=1;i<n;i++)
        {
            score+=cost[a[i-1]][a[i]];
        }
        score+=cost[a[n-1]][1];
        if(score==k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
    
}