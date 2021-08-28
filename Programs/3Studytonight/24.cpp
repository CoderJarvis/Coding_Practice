// Simple Program to Sort Array elements

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

    //  for(int i=1;i<n;i++)
    //  {
    //      for(int j=0;j<n-1;j++)
    //      {
    //          if(arr[j]>arr[i])
    //          {
    //              int t;
    //              t=arr[j];
    //              arr[j]=arr[i];
    //              arr[i]=t;
    //          }
    //      }
    //  }


    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[i]>arr[j])
            {
                int t;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }





     cout<<"\nyour array is\n";
    for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }







}