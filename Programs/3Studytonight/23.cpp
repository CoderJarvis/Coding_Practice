// Program to find Largest and Smallest Element in an Array

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

    int max,min;
    max=arr[0];
    min=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];

        else if(arr[i]<min)
        min=arr[i];
    }
    cout<<"\nmax :"<<max<<" "<<"min :"<<min;




}