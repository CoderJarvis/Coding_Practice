#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;
     int a=0,b=1,c=a+b;
     cout<<a<<" "<<b<<" ";
     for(int i=3;i<=n;i++)
     {
        
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
     }



cout<<'\n';
}