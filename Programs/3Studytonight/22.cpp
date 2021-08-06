// Program to Delete an Element from Array in C

#include <iostream>
using namespace std;
int main()
{

     int arr[100];
     cout<<"enter the number of element you want to insert\n";
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }

     cout<<"your array is\n";
    for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }

     cout<<"\nenter the element you want to delete\n";
     int ele;
     cin>>ele;
     int index;
      for(int i=0;i<n;i++)
     {
        if (arr[i]==ele)
        {
            index=i;
        }
        
     }

    //  cout<<index;

     for(int i=index+1;i<=n-1;i++)
     {
         arr[i-1]=arr[i];
     }
     n--;

       for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }







}