#include<iostream>
using namespace std;
class b
{
    int a,b;
public:
    virtual~b()
    {
        cout<<"bbb"<<endl;
    }
 virtual   void setter()
 {
        a=9,b=33;
 }
    virtual void getter()
    {
        cout<<a<<b<<endl;
    }
};
class d:public b
{
    int c;

public:    ~d()
    {
        cout<<"d"<<endl;
    }
    void setter();
    void getter()
    {
        cout<<c<<endl;
    }
};
void d::setter()
{
    c=44;
}
int main()
{
    d b4;
    d *d1;
    //d b1;
    d1=&b4;
    d1->setter();
    d1->getter();
}
