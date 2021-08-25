#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st;
     cin>>st;
     int sum=0;
   
     for(int i=0;i<st.length();i++)
     {
         if(i%2==0)
         sum=sum+(st[i]-48);
         else
         sum=sum-(st[i]-48);
     }
    //  cout<<(sum1>sum2?sum1-sum2:sum2-sum1);
    cout<<abs(sum)<<endl;
    


}