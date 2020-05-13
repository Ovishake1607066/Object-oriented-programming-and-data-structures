#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[100],b,c,d;
    for(ll i=1;i<6;i++)
        cin>>a[i];
    for(ll i=2;i<6;i++)
    {
        b=a[i];
        c=i;
        while(c>0 && a[c-1]>b)
        {
            a[c]=a[c-1];
            c--;
        }
        a[c]=b;
    }
        for(ll i=1;i<6;i++)
                cout<<a[i]<<endl;
}
