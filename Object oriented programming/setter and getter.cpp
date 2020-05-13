#include<iostream>
using namespace std;
class time
{
    int sec;
    int hour;
    int minute;
    int second;
    int calculation(time x,time y)
    {
        int a,b,c,d;
        x.hour=x.sec/3600;
        a=x.sec%3600;
        x.minute=a/60;
        b=a%60;
        x.second=b;
        y.hour=y.sec/3600;
        c=y.sec%3600;
        y.minute=c/60;
        d=a%60;
        y.second=d;
    }
public:
    int setter()
    {
        int input;
        cout<<"Give your desired time: ";
        cin>>input;
        sec=input;
    }
    void func(time a1,time a2)
    {
        calculation(a1,a2);
    }
    int getter(time t)
    {
    cout<<t.hour<<"HOURS"<<endl<<t.minute<<"MINUTES"<<endl<<t.second<<" SECONDS";
    }
};
int main()
{
    time t1,t2,t;
    t1.setter();
    t2.setter();
    t.func(t1,t2);
    if(t1.hour>t2.hour)
    {
        if(t1.second<t2.second)
        {
            t.second=t1.second+60-t2.second;
            t2.minute++;
        }
        else
        {
            t.second=t1.second-t2.second;
        }
        if(t1.minute<t2.minute)
        {
            t.minute=t1.minute+60-t2.minute;
            t2.hour++;
        }
        else
            t.minute=t1.minute-t2.minute;
        t.hour=t1.hour-t2.hour;
    }
    else
    {
        if(t2.sec<t1.sec)
        {
            t.sec=t2.sec+60-t1.sec;
            t1.minute++;
        }
        else
        {
            t.sec=t2.sec-t1.sec;
        }
        if(t1.minute>t2.minute)
        {
            t.minute=t2.minute+60-t1.minute;
            t1.hour++;
        }
        else
            t.minute=t2.minute-t1.minute;
        t.hour=t2.hour-t1.hour;
    }
    t.getter(t);
}
