#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int flag = 0;
        for(int i=0;i<n;i++) {
            if(a[i]!=a[0])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            cout<<-1<<endl;
        else {
            int maxi=*max_element(a.begin(),a.end());
            for(int i=0;i<n;i++){
                if(a[i]==maxi){
                    if(i-1>=0 && a[i-1]<a[i]){
                        cout<<i+1<<"\n";
                        break;
                    }
                    if(i+1<n && a[i+1]<a[i]){
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
        }       
    }
}