//Print the Armstrong numbers between two intervals

#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int x)
{
    int temp=x;
    int sum=0;
    int r;

    while(x!=0)
    {
        r=x%10;
        sum=sum+pow(r,3);

        x=x/10;
    }

    if(sum==temp)
    return 1;
    else
    return 0;
}
int main()
{

     int n1,n2;
     cin>>n1>>n2;
    for(;n1<=n2;n1++)
    {
        if(armstrong(n1))
        {
            cout<<n1<<" ";
        }
    }


}