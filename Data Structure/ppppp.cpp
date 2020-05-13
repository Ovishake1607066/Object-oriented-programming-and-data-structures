#include<iostream>
using namespace std;
class c
{
    int i;
public:
    int j;
     void getter()
    {
        cout<<"sdf";
        //cout<<i<<j;
    }
};
 class c2
{
    int e;
public:
    void getter()
    {
        cout<<"dderived";
    }
};
class c3: public c,public c2
{
    int g;
    public:
    void getter()
    {
        cout<<"ads";
        getter();
    }
};
int main()
{
    c3 e;
    //obj1.j=33;
    e.c2::getter();

}
