#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    ll a[1000];
    for(ll i=0,j=0; i<s.size(); i++)
    {
        if(s[i]==',' || s[i]==' ')
            continue;
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
        {
            ll op2=a[j-1];
            ll op1=a[j-2];
            ll result;
            if(s[i]=='+')
            {
                result=op1+op2;
            }
            if(s[i]=='-')
            {
                result=op1-op2;
            }
            if(s[i]=='*')
            {
                result=op1*op2;
            }
            if(s[i]=='/')
            {
                result=op1/op2;
            }
            if(s[i]=='^')
            {
                result=op1^op2;
            }
            a[j-2]=result;
            j--;

        }
        else if((s[i]>='0' && s[i]<='9'))
        {
            ll operand =0;
            while(i<s.size() && ((s[i]>='0' && s[i]<='9')))
            {
                operand=operand*10+(s[i]-'0');
                i++;
            }
            i--;
            a[j++]=operand;
        }
    }
    cout<<a[0]<<endl;
}
