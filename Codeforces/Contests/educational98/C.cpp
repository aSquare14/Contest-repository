#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
int count(string s,char open,char close) {
    stack<char> st;
    int count = 0;
    for(int i=0;i<s.length();i++) {
        if(!st.empty() && s[i]==close) {
            if(st.top()==open)
                count++;
            st.pop();
        } 
        else if(s[i]==open) {
            st.push(open);
        }
    }
    return count;
}
int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        string s1,s2;
        for(int i=0;i<s.length();i++) {
            if(s[i]==')' || s[i]=='(') {
                s1+=s[i];
            }
            else {
                s2+=s[i];
            }
        }
        cout<<count(s1,'(',')') + count(s2,'[',']')<<endl;
    }
}