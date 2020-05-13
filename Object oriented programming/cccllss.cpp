#include<iostream>
#include<cstring>
#include<assert.h>
using namespace std;
class c
{
    public:
    int a,b;
    int ar[10];
    char *s;
public:static int p;

    static int fs()
    {
        return p++;
    }
    c(int i)
    {
        a=i;
    }
    c(char *c)
    {

        cout<<"constttttt ca;lled"<<endl;
        s=new char[strlen(c)];
        strcpy(s,c);
    }
    void j(c c1,c c2)
    {
        s=new char[strlen(c1.s)+strlen(c2.s)];
        strcpy(s,c1.s);
        strcat(s,c2.s);
    }
   const void  d()
    {
        cout<<a<<endl;
    }
    c()
    {
        a=0;
        cout<<"constr called"<<endl;
    }
    ~c()
    {

        cout<<"destructor called"<<endl;
    }
   c &  operator + (int x)
    {
        a=a+x;
        cout<<"weeeeeeeeeeee                                    "<<*this<<endl;
        return *this;
    }
    c operator ++()
    {

        a=a+1;
    }
    bool friend operator >(c c1,c c2)
    {
        if(c1.a>c2.a)
            return 1;
        else
            return false;
    }

    friend istream   & operator >>(istream &i,c &c1)
    {
        i>>(c1.a)>>c1.b;
        return i;
    }/*
   friend  ostream & operator <<(ostream &o,c c1)
    {
        o<<c1.a<<c1.b<<endl;
        return o;
    }
    int & operator [](int n)
    {
        assert(n>=0 &&n<10);
        return ar[n];
    }*/
    c * operator ->()
    {
        return this;
    }
};
int c :: p;
void f(const int *s)
{
    cout<<s[1]<<endl;
}
int main()
{
    int j=5;
    int *i;
    i=&j;
    cout<<*i<<endl;
    c c22(44);
    c *cc=&c22;
    cout<<(*cc).a<<endl;
    cout<<c22->a<<endl;;
    int a[]={333,3333};
    cout<<a<<endl;
    f(a);
    c c1,c2,c3;
    c1+1+2+4;
    char *c=new char[22];
    c="qwq";
    char s[]="qwd";
    //f(s);
    c=c+1;
    cout<<c<<endl;
    //cout<<f(aa)<<endl;
    c1.d();
    {
        c2=c1;
        c2.d();
    }
    c1.d();
}
