#include<bits/stdc++.h>
using namespace std;
void s(int &p1)
{
    p1=4;
}
int main()
{
    int i=6;
    int *a=&i;
    s(*a);
    cout<<*a;
}
