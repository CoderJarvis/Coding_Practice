// C Program to Calculate Average Using Arrays

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int arr[n];
     int sum=0;
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
         sum=sum+arr[i];
     }

    cout<<"average of the number is : "<<(float)sum/n;     
}
