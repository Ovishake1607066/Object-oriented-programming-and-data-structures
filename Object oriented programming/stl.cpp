#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int>s;
   s.insert(100);
   s.insert(50);
   s.insert(50);
   set<int> :: iterator i;
    cout<<s.size()<<endl;
    cout<<*s.begin()<<endl;
   for(i=s.begin();i!=s.end();i++)
        cout<<*i<<endl;
}

