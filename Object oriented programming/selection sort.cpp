#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[100],b,c,d;
    for(ll i=1;i<6;i++)
        cin>>a[i];
    for(ll i=1;i<6-1;i++)
    {
        b=i;
        c=a[i];
        for(ll j=i;j<6;j++)
        {
            if(a[j]<c)
            {
                c=a[j];
                b=j;
            }
        }
        d=a[i];
        a[i]=c;
        a[b]=d;
    }
        for(ll i=1;i<6;i++)
            cout<<a[i]<<endl;
}
