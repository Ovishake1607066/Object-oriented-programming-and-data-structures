#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,xtra;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        xtra=n-i;

        if(xtra%i==0&&xtra!=0)
            sum++;
            //cout<<sum<<endl;
    }
    cout<<sum<<endl;
}
