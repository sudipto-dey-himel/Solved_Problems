//Division?
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    if(n<=1399)
    cout<<"Division 4";
    else if(n>=1400 && n<=1599)
    cout<<"Division 3";
    else if(n>=1600 && n<=1899)
    cout<<"Division 2";
    else cout<<"Division 1";
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}