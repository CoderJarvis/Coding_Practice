#include <iostream>
using namespace std;
int main()
{   int max;
    cin>>max;
    int a,b,c,i;
    a=0;
    b=1;
    c=a+b;
    
    cout<<a<<" "<<b<<" ";
    while(c<=max)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
}