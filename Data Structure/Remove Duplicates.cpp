#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],a2[n],b,c,d=0;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<n<<endl;
        cout<<a[0]<<endl;
        return 0;
    }
    for(ll j=n-1;j>=0;j--)
    {
        if(a[j]==0)
            continue;
        b=a[j];
        c=0;
        for(ll i=j-1;i>=0;i--)
        {
            if(a[i]==b && c==0)
                c=1;
            if(a[i]==b && c)
                {
                    a[i]=0;
                    d++;
                }
        }
    }
    cout<<n-d<<endl;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
            continue;
        else
            cout<<a[i]<<" ";
    }

}
