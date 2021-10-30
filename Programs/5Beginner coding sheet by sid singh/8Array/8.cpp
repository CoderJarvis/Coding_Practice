#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int temp;
    temp=a;
    a=c;
    c=temp;
    cout<<a<<b<<c;

}
//incomplete