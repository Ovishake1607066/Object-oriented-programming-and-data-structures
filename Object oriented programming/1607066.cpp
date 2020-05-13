#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *forw,*backw;
};
node *first=NULL,*last=NULL,*srt,*temp,*temp2;
int create(int n)
{
    node *ptr;
    ptr=new node();
    ptr->info=n;
    ptr->forw=NULL;
    ptr->backw=NULL;
    if(first==NULL)
    {
        first=ptr;
        last=ptr;
    }
    else
    {
        int i=0,j=0;
        for(srt=first; ;srt=srt->forw)
        {
            if((srt->info)<n)
                {
                    temp=srt;
                    if(srt->forw==NULL)
                    {
                    j=1;
                    break;
                    }
                }
            else
            {
                temp=srt;
                i=1;
                break;
            }
        }
        if(temp==first && i==1)
        {
            ptr->forw=temp;
            temp->backw=ptr;
            first=ptr;
        }
        else if(j==1 && temp==last)
        {
            temp->forw=ptr;
            ptr->backw=temp;
            last=ptr;
        }
        else
        {
            for(srt=first; ;srt=srt->forw)
            {
                if(srt==temp)
                {
                    temp2=srt->backw;
                    ptr->backw=temp2;
                    ptr->forw=srt;
                    srt->backw=ptr;
                    temp2->forw=ptr;
                    break;
                }
            }
        }
    }
}
int main()
{
    int n,item;
    cout<<"How many nodes you want to create: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        create(item);
    }
    cout<<endl<<"The Sorted Doubly linked list is:"<<endl<<endl;
    for(srt=first; ;srt=srt->forw)
    {
        if(srt->forw==NULL)
        {
            cout<<srt->info<<endl;
            break;
        }
        else
        {
            cout<<srt->info;
        }
    }
}
