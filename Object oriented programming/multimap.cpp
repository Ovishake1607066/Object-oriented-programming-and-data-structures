#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string,int>mm;
    mm.insert(make_pair("ONE",10));
    mm.insert(make_pair("two",20));
    mm.insert(make_pair("three",30));
    mm.insert(make_pair("three",30));
        multimap<string,int>::iterator it=mm.begin();
        multimap<string,int>::iterator lb=mm.lower_bound("three");
        multimap<string,int>::iterator ub=mm.upper_bound("two");
    //m.erase(it);
    //for(it=mm.begin();it!=mm.end();it++)
        //cout<<it->first<<"   :   "<<it->second<<endl;
    for(it=lb;it!=ub;it++)
        cout<<it->first<<"   :   "<<it->second<<endl;

}
