#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int highest=a>b?a:b;
    int lcm;
    for(int i=highest;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    cout<<lcm;
}