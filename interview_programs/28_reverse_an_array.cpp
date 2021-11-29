// Program to print the reverse of an Array

#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the number of elemts\n";
    int n;
    cin>>n;
     int arr[n];

     for(int i=0;i<n;i++)
     {  
         cin>>arr[i];
     }
     for(int i=0;i<n;i++)
     {  
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    //  for(int i=n-1;i>=0;i--)
    //  {  
    //      cout<<arr[i]<<" ";
    //  }
    int j;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

      for(int i=0;i<n;i++)
     {  
         cout<<arr[i]<<" ";
     }






}