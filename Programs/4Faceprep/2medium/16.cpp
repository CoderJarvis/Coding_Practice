#include <iostream>
using namespace std;
int check(int x,int y)
{   
    int r;
    int flag=0;
    while(x)
    {
        r=x%10;
        if(r==y)
        {
            flag=1;
            break;
        }

        x=x/10;
    }
    if(flag)
    return 1;
    else
    return 0;
}
int main()
{   
    cout<<"enter the digit yu want to search\n";
    int digit;
    cin>>digit;
    cout<<"enter the max number\n";
     int max;
     cin>>max;

     for(int i=1;i<=max;i++)
     {
         if(check(i,digit))
         {
             cout<<i<<" ";
         }
     }


}