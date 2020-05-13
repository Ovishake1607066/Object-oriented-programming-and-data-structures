#include<iostream>
#include<list>
#define ll long long
using namespace std;
int main()
{
    list<int>l;
    l.push_back(10);
     l.push_back(20);
      l.push_back(30);
       l.push_back(40);
    /*list<int>:: iterator it;
    it=l.begin();
    for(it;it!=l.end();it++)
        cout<<*it<<endl;*/
    cout<<l.front()<<endl;
     cout<<l.back()<<endl;
     l.push_front(1111111);
    list<int>::iterator it=l.begin();
     //l.insert(it,333333);
     for(it;it!=l.end();it++)
        if(*it==20)
        l.insert(it,333333);
     for(it=l.begin();it!=l.end();it++)
            cout<<*it<<endl;

}
