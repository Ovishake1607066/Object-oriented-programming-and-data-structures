#include<iostream>
using namespace std;
class man
{
protected:
    int acno;
public:
    void setac()
    {
        cout<<"Please enter person's account no: ";
        cin>>acno;
    }
};
class money:public man
{
protected:
    int deposit1,deposit2;
public:
    void setbalace()
    {
        cout<<"How much you want to deposit in counter 1: ";
        cin>>deposit1;
        cout<<"How much you want to deposit in counter 2: ";
        cin>>deposit2;
    }
};
class balance:public money
{
    int total;
public:
    void show()
    {
        total=deposit1+deposit2;
        cout<<endl<<"Person's account no: "<<acno<<endl<<"Total deposit amount: "<<total<<endl;
    }
};
int main()
{
    balance a;
    a.setac();
    a.setbalace();
    a.show();
}
