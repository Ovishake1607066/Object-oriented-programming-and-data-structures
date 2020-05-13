#include<iostream>
using namespace std;
class sub1
{
protected:
    int roll;
    float num1;
public:
    void setnum1()
    {
        cout<<"Enter student's roll no. :";
        cin>>roll;
        cout<<"Enter student's first subject's mark: ";
        cin>>num1;
    }
};
class sub2
{
protected:
    float num2;
public:
    void setnum2()
    {
        cout<<"Enter another subject's mark: ";
        cin>>num2;
    }
};
class avg:public sub1,public sub2
{
    float total;
    float avg;
public:
    void display()
    {
        total=num1+num2;
        avg=total/2;
        cout<<endl<<"Roll no. "<<roll;
        cout<<endl<<"Average of total marks: "<<avg<<endl;
    }
};
int main()
{
    avg a;
    a.setnum1();
    a.setnum2();
    a.display();
}
