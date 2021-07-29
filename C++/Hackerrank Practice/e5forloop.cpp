#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
     for(;n1<=n2;n1++)
     {
         if(n1==1)
         cout<<"one\n";
        else if(n1==2)
         cout<<"two\n";
        else if(n1==3)
         cout<<"three\n";
        else if(n1==4)
         cout<<"four\n";
        else if(n1==5)
         cout<<"five\n";
        else if(n1==6)
         cout<<"six\n";
        else if(n1==7)
         cout<<"seven\n";
        else if(n1==8)
         cout<<"eight\n";
        else if(n1==9)
         cout<<"nine\n";
         else if(n1>9)
         {
             if(n1%2==0)
             printf("even\n");
             else if(n1%2!=0)
             printf("odd\n");

         }
        
     }



cout<<'\n';
}