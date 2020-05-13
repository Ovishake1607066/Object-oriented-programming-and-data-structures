#include<iostream>
using namespace std;
class m
{
    int r,c;
    int m1[20][20];
public:
    m(int x,int y)
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
               cin>>m1[i][j];
            }
        }
    }
    m friend operator+(m m6,m m4)
    {
        m mm;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2 ;j++)
            {
               mm.m1[i][j]=m6.m1[i][j]+m4.m1[i][j];
            }
        }
        return mm;
    }
    m friend operator*(m m1,m m2)
    {
        m m3;
        int s=0;
        for(int i=0,j=0;i<2,j<2;j++,i++)
        {
            s=0;
            for(int k=0,l=0;k<2,l<2;k++,l++)
            {
                s=s+m1.m1[k][l]*m2.m1[l][k];
            }
            m3.m1[i][j]=s;
        }
        return m3;
    }
    void show(int x,int y)
    {
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
               cout<<m1[i][j];
            }
        }
    }
    m(){}
};
int main()
{
    m m0(2,2),m2(2,2),m3,m4;
    m3=m0+m2;
    m4=m0*m2;
    m4.show(2,2);
}
