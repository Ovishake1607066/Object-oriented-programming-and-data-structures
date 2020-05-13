#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
public:
    void student1()
    {
        cout<<"Enter student's roll: ";
        cin>>roll;
    }
};
class engineering:public student
{
public:
    void engineering1()
    {
        cout<<endl<<"\tEngineering studdent!"<<endl;
    }
};
class medical:public student
{
public:
    void medica1l()
    {
        cout<<endl<<"Medical student";
    }
};
class eee:public engineering
{
protected:
    int sub1;
public:
    void eee1()
    {
        cout<<"Enter student's EEE's marks: ";
        cin>>sub1;
    }
};
class cse:public engineering
{
protected:
    int sub2;
public:
    void cse1()
    {
        cout<<"\tEnter student's CSE's marks: ";
        cin>>sub2;
        cout<<endl<<"\tROLL: "<<roll<<endl;
        cout<<"\tCSE Student"<<endl;
        cout<<"\tMarks: "<<sub2<<endl;
    }
};
class me:public engineering
{
protected:
    int sub3;
public:
    void me1()
    {
        cout<<"Enter student's ME's marks: ";
        cin>>sub3;
    }
};
int main()
{
    cse c;
    c.student1();
    c.engineering1();
    c.cse1();
}
