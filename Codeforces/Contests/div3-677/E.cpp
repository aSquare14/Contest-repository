#include <bits/stdc++.h>
#define ll long long
const unsigned int MOD = 1000000007;

using namespace std;

ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}    
int main()
{
    int t;
    t=1;;
    for (int tt = 0; tt < t; tt++)
    {
        ll n;
        cin >> n;
        ll r = n / 2;

        ll ans = (fact(n) / (fact(r) * fact(n - r))) / 2 * fact(n / 2 - 1) * fact(n / 2 - 1);
        cout << ans << "\n";
    }
    return 0;
}