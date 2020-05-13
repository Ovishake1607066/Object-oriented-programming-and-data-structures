#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l=s.length();
    int a[1000];
    for(int i=l-1,j=0;i>=0;i--)
    {
        if(s[i]==',' || s[i]==' ')
            continue;
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            float result;
            float op1=a[j-1];
            float op2=a[j-2];
            if(s[i]=='+')
            {
                result=op1+op2;
            }
            else if(s[i]=='-')
            {
                result=op1-op2;
            }
            else if(s[i]=='*')
            {
                result=op1*op2;
            }
            else if(s[i]=='/')
            {
                result=op1/op2;
            }
            a[j-2]=result;
            j=j-1;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            int oper=0;
            int x=1;
            while(i<l && s[i]>='0' && s[i]<='9')
            {
                oper=oper+(s[i]-'0')*x;
                i--;
                x=x*10;
            }
            i++;
            a[j]=oper;
            j++;
        }
    }
    cout<<a[0];
}
