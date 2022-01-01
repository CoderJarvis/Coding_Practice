// C Program to Display Armstrong Number Between Two Intervals

#include <iostream>
using namespace std;
int isArmstrong(int n)
{
    int sum=0;
    int temp=n;

    while (n!=0)
    {
        int r=n%10;
        sum=sum+r*r*r;

        n=n/10;
    }
    if (temp==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}
int main()
{
    int n1,n2;
     cin>>n1>>n2;
    for(;n1<=n2;n1++)
    {
        if(isArmstrong(n1))
        {
            cout<<n1<<" ";
        }
    }

}
