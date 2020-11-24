#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++) {
            int gang; cin>>gang;
            mp[gang].push_back(i);
        }
        if(mp.size()==1)
            cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            vector<vector<int>> other;
            for(auto i : mp)
                other.push_back(i.second);
            
            for(int i=1;i<(int)other.size();i++){
                for(auto j : other[i])
                    cout<<other[0][0]+1<<" "<<j+1<<"\n";
            }
            
            for(int i=1;i<(int)other[0].size();i++)
                cout<<other[0][i]+1<<" "<<other[1][0]+1<<"\n";
        }
    }
}