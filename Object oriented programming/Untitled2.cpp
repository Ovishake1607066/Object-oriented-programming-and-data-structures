#include<bits/stdc++.h>
using namespace std;
class time
{
    int Time;
    int calculation();

public:
    void input();

    int output();
}time1,time2;
void time::input()
{  cout<<"Input the time in second: ";
    cin>>Time;
}
int time::output()
{

    return calculation();

}
int time::calculation()
{
    //int hour,minute,second;
    int x=Time;
    x=Time%60;
    Time=Time/60;
    return x;



}
int main()
{
    time1.input();
    time2.input();
    int TIME1[3],TIME2[3],TIME[3];
    for(int i=0;i<3;i++)
    {
        TIME1[i]=time1.output();
    }
    for(int i=0;i<3;i++)
    {
        TIME2[i]=time2.output();
    }
    int X=0;
    for(int i=2;i>-1;i--)
    {
        if(TIME1[i]>TIME2[i])
        {
            X=1;
        }
        else if(TIME1[i]<TIME2[i])
        {
            X=2;
        }
    }
    if(X==0)
    {
        cout<<"0 Hours 0 Minutes 0 Second";
    }
    else if(X==1)
    {
        for(int i=0;i<3;i++)
    {
        if(TIME1[i]<TIME2[i])
        {
            TIME1[i+1]--;
            TIME1[i]+=60;
        }
        TIME[i]=TIME1[i]-TIME2[i];
    }
    }
     else
    {
        for(int i=0;i<3;i++)
    {
        if(TIME2[i]<TIME1[i])
        {
            TIME2[i+1]--;
            TIME2[i]+=60;
        }
        TIME[i]=TIME2[i]-TIME1[i];
    }
    }
    cout<<TIME[2]<<" Hours "<<TIME[1]<<" Minutes "<<TIME[0]<<" Seconds"<<endl;

}
