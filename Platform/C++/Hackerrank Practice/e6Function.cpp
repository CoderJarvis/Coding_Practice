#include <iostream>
using namespace std;
int big(int n1,int n2,int n3,int n4)
{
    return n1>n2 && n1>n3 && n1>n4 ? n1 :n2>n3 && n2>n4 ? n2 :n3>n4 ? n3:n4;
}
int main()
{

     int n1,n2,n3,n4;
     cin>>n1>>n2>>n3>>n4;
     cout<<big(n1,n2,n3,n4);



cout<<'\n';
}