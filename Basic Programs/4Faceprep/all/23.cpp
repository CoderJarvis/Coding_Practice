// Find the number of times digit 3 occurs in each and every number from 0 to n

#include <iostream>
using namespace std;
int check(int x,int y)
{   
    int r;
    int flag=0;
    // static int c=0;//to see the difference
    int c=0;
    while(x)
    {
        r=x%10;
        if(r==y)
        {
            flag=1;
            c++;
        }

        x=x/10;
    }
    if(flag)
    return c;
    // else
    // return 0;
}
int main()
{   
    
    cout<<"enter the max number\n";
     int max;
     cin>>max;

     for(int i=1;i<=max;i++)
     {
        //  if(check(i,digit))
        //  {
        //      cout<<i<<" ";
        //  }

        cout<<i<<" "<<check(i,3)<<endl;
     }

}