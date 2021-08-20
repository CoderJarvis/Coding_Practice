#include <iostream>
using namespace std;
int check(int x)
{   
    int c=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        c++;
    }

    if(c==9)
    return 1;
    else
    return 0;
}
int main()
{
     int max;
    //  int c=0;
     cin>>max;
     for(int i=1;i<=max;i++)
     {
         if(check(i))
         {
             cout<<i<<" ";
         }
     }

}