#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    m["one"]=1;
    m["two"]=20;
    m["three"]=30;
    cout<<m["one"]<<endl;
    if(m.find("two")!=m.end())
        cout<<m["two"]<<endl;
    m.insert(make_pair("four",40));
    //m.erase("two");
    map<string,int>::iterator it=m.begin();
    m.erase(it);
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<"   :   "<<it->second<<endl;
}
