#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
int isSubsequence(string s, string t) {
    int sLen = s.length(), sIdx = 0, tLen = t.length();
    for (int i=0; i<tLen && sIdx<sLen; i++) 
        if (t[i]==s[sIdx]) sIdx++;
    return sIdx==sLen;
}
int main() {
    int t; cin>>t;
    while(t--) {
       int n,q; cin>>n>>q;
       string s; cin>>s;
       while(q--) {
           int l,r;
           cin>>l>>r;
           int len = r - l + 1;
           string t = s;
           string temp = s.substr(l-1,len);
           bool flag = false;
           for(int i=l-1;i<r;i++) {
                char ch = t[i];
                t[i] = '#';
                if(isSubsequence(temp,t)) {
                    flag = true;
                    break;
                }
                t[i] = ch;
           }
           if(flag) {
               cout<<"YES"<<endl;
           }
           else {
               cout<<"NO"<<endl;
           }
       }
    }
    return 0;
}