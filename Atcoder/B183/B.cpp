#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;

int main() {
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double num = ((x1*y2)+(x2*y1)); 
    double den = y2 + y1;
    double ans = (num/den);
    cout << fixed << setprecision(7)<< ans<<endl; 
    return 0;
}