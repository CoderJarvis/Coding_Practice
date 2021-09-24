// Program to find average of N Numbers.

#include <iostream>
using namespace std;
int main()
{

    cout<<"how many numbers you want to input\n";
    int n;
    cin>>n;
    int backup=n;
    int sum=0,x;

    while(n--)
    { 
      cin>>x;
      sum=sum+x;
    }
    cout<<"the avergae is :"<<(float)sum/backup;
}
