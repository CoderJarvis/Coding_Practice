// Abudant Number
// number is less than its sum of proper divisors

#include <iostream>
using namespace std;
int main()
{

     int n;
     cin>>n;

    int sumOfDevisors=0;
     for(int i=1;i<n;i++)
     {
         if(n%i==0)
         {
             sumOfDevisors=sumOfDevisors+i;
         }
     }
     cout<<sumOfDevisors<<endl;

     if(n<sumOfDevisors)
     cout<<"its an abudant number\n";
     else
     cout<<"not an abudant number\n";



}