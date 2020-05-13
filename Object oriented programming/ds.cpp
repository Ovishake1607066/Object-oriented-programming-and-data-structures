#include<iostream>
using namespace std;
class node
{
public:
    int i;
    node *l,*r,*next;
};
node *r=NULL,*top=NULL;
int dl(int d)
{
    node *p;
    p=new node();
    p->i=d;
    p->l=NULL;
    p->r=NULL;
    if(r==NULL)
    {
r=p;
    }
    else
    {
        node *srt;
        for(srt=r; ; )
        {
            if(srt->i>d)
            {
                if(srt->l==NULL)
                {
                    srt->l=p;
                    break;
                }
                else
                {
                    srt=srt->l;
                }
            }
            else
            {
                if(srt->r==NULL)
                {
                    srt->r=p;
                    break;
                }
                else
                    srt=srt->r;
            }
        }
    }
}
int push(node *b)
{
    b->next=top;
    top=b;
    return 0;
}
node* pop()
{
    node *n;
    if(top==NULL)
        return top;
    else
    {
        n=top;
        top=(*top).next;
    }
    return n;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        int j;
        j=i;
        dl(j);
    }
    node *s;
    s=r;
    while(s!=NULL)
    {
        cout<<s->i<<endl;
        if(s->r!=NULL)
            push(s->r);
        if(s->l!=NULL)
            s=s->l;
        else
            s=pop();

    }
    delete s;
}
