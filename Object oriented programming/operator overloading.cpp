#include<iostream>
using namespace std;
class c
{
    int i;
public:
    c(int i)
    {
        this->i=i;
    }
    c()
    {

    }
    c friend  operator+(c c4,c c6)
    {
        c c5;
        c5.i=c6.i+c4.i;
        return c5;
    }
    void show()
    {
        cout<<i;
    }
};
int main()
{
    c c1(5),c2(6),c3;
    c3=c1+c2;
    c3.show();

}

