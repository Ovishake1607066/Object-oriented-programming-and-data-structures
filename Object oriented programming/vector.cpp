#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(33);
    v.push_back(3443);
    v.push_back(444433);
    cout<<v.size()<<endl;
    for(int i=0;i<3;i++)
        cout<<v[i]<<endl;
    vector<int>::iterator it;
    it=v.begin();
    v[0]=33333;
    v.insert(it+3,10);
        for(int i=0;i<4;i++)
        cout<<v[i]<<endl;
        for(it;it!=v.end();it++)
            cout<<*it<<endl;
}
