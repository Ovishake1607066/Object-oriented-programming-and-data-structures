#include<bits/stdc++.h>
using namespace std;
#define ll long long
int op(char c)
{
    ll w=0;
    if(c=='+' || c=='-')
        w=1;
    else if(c=='*'||c=='/')
        w=2;
    else
        w=3;
    return w;
}
int main()
{
    string s1,s2,s3;
    char a[1000],c1,c2,c3;
    int b=0,d,e,f;
    getline(cin,s3);
    for(ll i=0, j=s3.length()-1; j>=0; j--,i++)
        s1=s1+s3[j];
    for(ll i=0; i<s1.size(); i++)
    {
        if(s1[i]=='(')
            s1[i]=')';
        else if(s1[i]==')')
            s1[i]='(';
    }
    s1=s1+')';
    //cout<<s1<<endl;
    a[b++]='(';
    //cout<<s1<<endl;
    for(ll i=0,j=0; i<s1.size(); i++)
    {
        if(s1[i]==' ' || s1[i]==',')
            continue;
        else if(s1[i]<='Z' && s1[i]>='A')
            s2=s2+s1[i];
        else if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*' || s1[i]=='/' || s1[i]=='^')
        {
            //cout<<s1[i]<<endl;
            while(b>0 && (a[b-1]!='('))
            {
                ll d=op(s1[i]);
                ll e=op(a[b-1]);
                if(e>=d)
                {
                    s2=s2+a[b-1];
                }
                else
                {
                    break;
                }
                b--;
            }
            a[b++]=s1[i];
        }
            else if(s1[i]=='(')
                a[b++]=s1[i];
            else if(s1[i]==')')
            {
                while(a[--b]!='(')
                {
                    s2=s2+a[b];
                }
            }
            else
                cout<<"Error"<<endl;
            cout<<s2<<endl;
            for(int x=0;x<b;x++)
            cout<<a[x];
            cout<<endl;

    }
    string rs;
    cout<<s2<<endl;
    for(ll i=s2.size()-1;i>=0;i--)
        rs=rs+s2[i];
    cout<<rs<<endl;
    }
