#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
void f(int x) throw(int,char)
{


        if(x==1)
            throw x;
        if(x==2)
            throw 'x';
        else
            cout<<"noooo"<<endl;

}
int main()
{
    double i;
    cout<<typeid(i).name()<<endl;
    try
    {
        f(2);
        f(1);
        f(3);
    }
    catch(...)
    {
        cout<<"exception"<<endl;
    }
}
