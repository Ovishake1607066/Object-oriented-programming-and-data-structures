#include<iostream>
#define nodecreate node *ptr;\
ptr=new(node);\
cout<<"Enter new node \n";\
int item;\
cin>>item;\
ptr->info=item;\
ptr->link=NULL;
using namespace std;
class node
{
public:
    int info;
    node *link;
};
node *head=NULL,*temp,*srt;
traverse()
{
    for(srt=head; ;srt=srt->link)
    {
        cout<<srt->info<<endl;
        if(srt->link==NULL)
        {
            break;
        }
    }
}
after()
{
    int searc;
    cout<<"Enter the item for searching\n";
    cin>>searc;
    nodecreate
    for(srt=head; ;srt=srt->link)
    {
        if(srt->info==searc)
        {
            ptr->link=srt->link;
            srt->link=ptr;
            break;
        }
    }
    traverse();
}
last()
{
    nodecreate
    for(srt=head; ;srt=srt->link)
    {
        if(srt->link==NULL)
        {
            srt->link=ptr;
            break;
        }
    }
    traverse();
}
before()
{
    node *temp;
    int searc;
    cout<<"Enter a item for searching\n";
    cin>>searc;
    nodecreate
    for(srt=head; ;srt=srt->link)
    {
        if(srt->info==searc)
        {
            temp->link=ptr;
            ptr->link=srt;
            break;
        }
        else
        {
            temp=srt;
        }
    }
    traverse();
}
first()
{
    nodecreate
    ptr->link=head;
    head=ptr;
    traverse();

}
create(int n)
{
    node *ptr;
    ptr=new(node);
    ptr->info=n;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
        temp=ptr;
    }
    else
    {
        temp->link=ptr;
        temp=ptr;
    }
}
int main()
{
    int i,n,item;
    cout<<"How many nodes\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>item;
        create(item);
    }
    traverse();
    //last();
    //first();
    //after();
    before();
}
