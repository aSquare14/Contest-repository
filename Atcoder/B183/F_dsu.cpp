#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
// https://atcoder.jp/contests/abc183/submissions/18150901
int sz[100000]={0};
int parent[100000]={-1};
unordered_map<int,int> mp; // {student - class}

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v) {
    if(v==parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
void print(int x) {
    int root = x;
    cout<<root<<endl;
    while(root!=parent[x]) {
        root = parent[x];
        cout<<x<<endl;
    }
}
int main() {
    int n; cin>>n;
    for (int v = 0; v <= n; ++v) 
        parent[v] = v;
    int q; cin>>q;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) {
        int c; cin>>c;
        mp[i+1] = c;
    }
    for(int i=0;i<q;i++)
    {
        int query; cin>>query;
        if(query==1) {
            int a,b;
            cin>>a>>b;
            union_sets(a,b);
        }
        else if(query==2) {
            int clss,student;
            cin>>student>>clss;
            print(student);
        }
    }
    return 0;
}