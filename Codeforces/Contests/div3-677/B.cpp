#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int len; cin>>len;
        vector<char> s(len);
        for(int i=0;i<len;i++)
        {
            cin>>s[i];
        }
        vector<int> idx;
        for(int i=0;i<len;i++) {
            if(s[i]=='1') {
                idx.push_back(i);
            }
        }
        int moves = 0;
        for(int i=1;i<idx.size();i++) {
            int diff = idx[i]-idx[i-1];
            moves+=(diff-1);
        }
        cout<<moves<<endl;
    }
}