#include <iostream>
using namespace std;
int main()
{

     cout<<"how many numbers you want to input\n";
     int n;
     cin>>n;
    //  int arr[n];
     int sum=0,x;

    //  cout<<"input the numbers\n";
    //  for(int i=0;i<n;i++)
    //  {
    //      cin>>arr[i];
    //      sum=sum+arr[i];
    //  }

    //  cout<<"the avergae is :"<<(float)sum/n;



      for(int i=0;i<n;i++)
     {
         cin>>x;
         sum=sum+x;
     }

     cout<<"the avergae is :"<<(float)sum/n;


}