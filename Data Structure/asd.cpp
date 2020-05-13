#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    set<ll>s;
    for(ll i=0;i<10;i++)
        s.insert(i);
    set<ll> :: iterator it,it2,it3;
    for(it=s.begin();it!=s.end();)
    {
        it2=it;
        //cout<<*(it++)<<endl;
        cout<<(*++it)-*it2<<endl;
        //cout<<*it<<"   "<<*(it)++<<"   "<<*(it--)<<endl;
        //cout<<*(it)-*(it--)<<endl;
        //it++;
        //it--;
    }
}

