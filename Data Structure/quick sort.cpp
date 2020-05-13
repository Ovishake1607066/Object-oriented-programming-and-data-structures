#include<bits/stdc++.h>
using namespace std;
#define ll long long
int quick(ll *a,ll *n,ll *beg,ll *end,ll *loc)
{
    //cout<<a[1]<<endl;
    ll left,right,c=0;
    left=*beg;
    right=*end;
    *loc=*beg;
    while(1)
    {
        if(c==0)
        {
            while(*(a+*loc)<=*(a+right) && *loc!=right)
                {
                    right--;
                }
            if(*loc==right)
                {
                    return 1;
                }
            else if(*(a+*loc)>*(a+right))
            {
                ll temp=*(a+*loc);
                *(a+*loc)=*(a+right);
                *(a+right)=temp;
                *loc=right;
                c=1;
            }
        }
        if(c==1)
        {
            while(*(a+*loc)>=*(a+left) && *loc!=left)
                left++;
            if(*loc==left)
                return 1;
            else if(*(a+*loc)<*(a+left))
            {
                ll temp=*(a+*loc);
                *(a+*loc)=*(a+left);
                *(a+left)=temp;
                *loc=left;
                c=0;
            }
        }

    }
}
int main()
{
    stack<int>s;
    ll a[1000],n,upper[100],lower[100],top=0,u=0,l=0,beg,end,loc=0;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(n>=2)
    {
        top++;
        lower[l++]=0;
        upper[u++]=n-1;
        while(top)
        {
            beg=lower[l-1];
            l--;
            end=upper[u-1];
            u--;
            top--;
            quick(a,&n,&beg,&end,&loc);
            if(beg<loc-1)
            {
                top++;
                lower[l++]=beg;
                upper[u++]=loc-1;
            }
            if(loc+1<end)
            {
                top++;
                lower[l++]=loc+1;
                upper[u++]=end;
            }
        }
    }
    for(ll i=0;i<n;i++)
        cout<<a[i]<<endl;
}
