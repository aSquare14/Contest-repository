#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--) {
    int N;
    cin >> N;
    vector<int> A(N);
 
    for (auto &a : A)
        cin >> a;
 
    A.erase(unique(A.begin(), A.end()), A.end());
    N = int(A.size());
    map<int, int> occur;
 
    for (auto &a : A)
        occur[a]++;
 
    int best = N;
 
    for (auto &a : A)
        best = min(best, occur[a] + 1 - (A.front() == a) - (A.back() == a));
 
    cout << best << '\n';
  }
}