#include<bits/stdc++.h>
using namespace std;
#define ll long long
int quick(ll *a,ll *n,ll *beg,ll *end,ll *loc)
{
    ll left,right;
    left=*beg;
    right=*end;
    *loc=*beg;
    while(1)
    {
            while(*(a+*loc)<=*(a+right) && *loc!=right)
                right--;
            if(*loc==right)
                return 1;
            ll temp2=*(a+*loc);
            *(a+*loc)=*(a+right);
            *(a+right)=temp2;
            *loc=right;
            while(*(a+*loc)>=*(a+left) && *loc!=left)
                left++;
            if(*loc==left)
                return 1;
            ll temp=*(a+*loc);
            *(a+*loc)=*(a+left);
            *(a+left)=temp;
            *loc=left;
    }
}
int main()
{
    ll a[1000],upper[1000],lower[1000],u=0,l=0,top=0,loc=0,beg,end,n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(n>=2)
    {
        top++;
        upper[u++]=n-1;
        lower[l++]=0;
        while(top)
        {
            beg=lower[l-1];
            l--;
            end=upper[u-1];
            u--;
            top--;
            quick(&a[0],&n,&beg,&end,&loc);
            if(beg<loc-1)
            {
                lower[l++]=beg;
                upper[u++]=loc-1;
                top++;
            }
            if(end>loc+1)
            {
                lower[l++]=loc+1;
                upper[u++]=end;
                top++;
            }
        }
    }
    for(ll i=0;i<n;i++)
        cout<<a[i]<<endl;

}
