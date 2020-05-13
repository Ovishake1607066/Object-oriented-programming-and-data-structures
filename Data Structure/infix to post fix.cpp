#include<bits/stdc++.h>
using namespace std;
int op(char c)
{
    int w=0;
    switch(c)
    {
    case '+':
    case '-':
        w=1;
        break;
    case '*':
    case '/':
        w=2;
        break;
    case '^':
        w=3;
        break;
    default:
        w=0;
    }
    return w;
}
int main()
{
    char  s1[1000],s2[10000];
    gets(s1);
    char a[10000],c1,c2,c3;
    int b=0,d,e,f,l=strlen(s1);
    a[b++]='(';
    s1[l]=')';
    for(int i=0,j=0;i<=l;i++)
    {
        if(s1[i]==',' || s1[i]==' ')
            continue;
        else if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*' || s1[i]=='/' || s1[i]=='^')
        {
            d=op(s1[i]);
            e=op(a[b-1]);
            if(e>=d)
            {
                c1=a[b-1];
                s2[j++]=c1;
                a[b-1]=s1[i];
            }
            else
            {
                a[b++]=s1[i];
            }
        }
        else if((s1[i]>='0' && s1[i]<='9') ||(s1[i]>='A' && s1[i]<='z'))
        {
            s2[j++]=s1[i];
        }
        else if(s1[i]=='(')
        {
            a[b++]='(';
        }
        else if(s1[i]==')')
        {
            while(a[--b]!='(')
            {
                s2[j++]=a[b];
                //cout<<s2[j-1]<<endl;
            }
        }
        else
            cout<<"ERRRRRRRRROOOOOOOOOOORRRRRRRRRR"<<endl;
            for(int x=0;x<b;x++)
            cout<<a[x];
            cout<<endl;
        cout<<s2<<endl;
    }
    cout<<s2<<endl;;
}
//A + (B * C - (D/E ^ F)* G )*H
