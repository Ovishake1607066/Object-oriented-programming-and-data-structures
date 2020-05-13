#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string roll;
    float avg;
    vector<int>v1;

};
class functor
{
public:
    bool operator()(student a,student b)
    {
        return a.roll>b.roll;
    }
};
int main()
{
    vector<student>v;
    ifstream file("student.txt");
    string line ;
    getline(file,line);
    while(getline(file,line))
    {
        student s;
        stringstream si(line);
        string s1;
        si>>s1;
        s.roll=s1;
        int i,s3=0,j=0;
        while(si>>i)
        {
            s.v1.push_back(i);
            s3=s3+i;
            j++;
        }
        s.avg=s3/j;
        cout<<s.avg<<endl;
        v.push_back(s);
    }
    functor f;
    sort(v.begin(),v.end(),functor());
    vector<student>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it).roll<<"\t";
        for(int i=0;i<(*it).v1.size();i++)
            cout<<(*it).v1[i]<<" ";
        cout<<"   "<<(*it).avg<<endl;
    }
//    sort(v.begin(),v.end(),[](student a,student b){return a.avg<b.avg;});

}
