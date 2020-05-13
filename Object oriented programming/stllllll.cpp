#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>v;
    for(ll i=0;i<3;i++)
        v.push_back(i);
            for(ll i=0;i<3;i++)
        cout<<v[i]<<endl;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<3;i++)
        cout<<v[i]<<endl;

}
