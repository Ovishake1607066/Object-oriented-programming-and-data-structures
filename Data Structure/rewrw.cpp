
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,res;
    cin>>n>>m;
    long long int arr[n];

    cin>>arr[0]>>arr[1];
    res =arr[1]- arr[0];

    for(int i=2;i<n;i++)
    {
        cin>>arr[i];
        res = __gcd(res,arr[i]-arr[i-1]);
    }
    //cout<<res<<endl;
    pair<long long int ,int >p[m];

    for(int i=0;i<m;i++)
    {
        cin>>p[i].first;
        p[i].second = i+1;
    }

    sort(p,p+m);

    for(int i=0;i<m;i++)
    {
        if(res%p[i].first==0)
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<p[i].second<<endl;
            return 0;
        }

        if(res< p[i].first)break;
    }
    cout<<"NO"<<endl;



}
