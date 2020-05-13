#include<iostream>
using namespace std;
const int t=9;
class time
{
    int s;
    float t;
    void u()
    {
        cout<<"private";
            }
            public:
     friend getter(time x,time y)
{
    cout<<&x<<endl;
//time z;
        x.s=y.s;
        x.t=y.t;
//return z;
}
public:
    time(int i)
    {
        cin>>s>>t;
        //u();
    }

     void show()
    {
        cout<<s<<t<<endl;
    }
};
int main()
{
    time y(3),x(3);
//    x.setter();
//y.setter();
    cout<<&x<<endl;
    getter(x,y);
     //time :: show();
    x.show();
}
