#include<iostream>
using namespace std;
class cons
{
    public:
    int w,z;
public:
    //cons(){cout<<i<<endl;}
    //cons(){cout<<w<<z;}
    //cons(int i,int j){w=i,z=j;cout<<w<<z<<endl;}
    /*cons(cons &i)
    {
        cout<<1<<endl;
        w=i.w;
        z=i.z;
        cout<<w<<z<<endl;
    }*/
};
int main()
{
    //cons c;
    //cons d(9,4);
  //  cons e(d);
    //cons w=d;
    cons q;
    cout<<q.w<<endl;
    //q=cons(d);
    //cons e(5.823423,7.5345435);
}
