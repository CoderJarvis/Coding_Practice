#include <iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    int t;
    cout<<"before swap "<<a<<" "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"after swap "<<a<<" "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
}