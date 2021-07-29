#include <iostream>
using namespace std;
void update(int *p1,int *p2)
{
    int t=*p1;
    *p1=*p1+*p2;
    *p2=t>*p2?t-*p2:*p2-t;
}
int main()
{

     int n1,n2;
     cin>>n1>>n2;
     int *ptr1=&n1;
     int *ptr2=&n2;

     update(ptr1,ptr2);
     cout<<n1<<endl<<n2;



cout<<'\n';
}