#include <bits/stdc++.h>
#define ll long long
const unsigned int MOD = 1e9 + 7;
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        ll n, m;
		cin >> n >> m;
		ll arr[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
        int parity = 1;
        for(int i=0;i<n;i++) {
            if(i%2==0)
                parity = 1;
            else parity =0;
            for(int j=0;j<m;j++) {
                if(parity) {
                    if(arr[i][j]%2==0)
                        arr[i][j]++;
                    parity = 0;
                }
                else {
                    if(arr[i][j]%2!=0)
                        arr[i][j]++;
                    parity = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
    }
}