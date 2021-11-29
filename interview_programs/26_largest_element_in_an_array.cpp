// C Program to Find Largest Element in an Array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max) //max is imp not arr[0]
        {
            max=arr[i];
        }        
    }
    cout<<max;
}
