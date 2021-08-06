// Program to insert an element in an Array

#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    cout<<"enter the size of the array\n";
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

    cout<<"\nenter the position in which you wnt to insert\n";
    int pos;
    cin>>pos;
    cout<<"enter the new element\n";
    int ele;
    cin>>ele;

    for(int i=n-1;i>=pos-1;i--)
    {
            arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n=n+1;
    cout<<"the nw array is\n";

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}