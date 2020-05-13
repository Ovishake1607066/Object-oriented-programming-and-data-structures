#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    vector<vector<ll> >v(33);
    for(ll i=0;i<3;i++)
        v[i].push_back(i);
    for(ll i=0;i<33;i++)
        cout<<v[i][0]<<endl;
    cout<<v.size()<<endl;
}
