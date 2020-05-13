#include<iostream>
using namespace std;
int main()
{
    int v=533;
    int *i=&v;
    int &r=v;
        cout<<&v<<endl;
 cout<<&r<<endl;
    cout<<&v<<endl;
    cout<<&i<<endl;
    cout<<*i<<endl;
    cout<<&(*i)<<endl;
}
