// C Program to Find the Largest Number Among Three Numbers

#include <iostream>
using namespace std;
int main()
{   
     int n1,n2,n3;
     cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
        cout<<n1<<" is greater";
    else if(n2>n3)
        cout<<n2<<" is Greater";
    else
        cout<<n3<<" is Greater";
    // int largest = n1>n2&&n1>n3?n1:n2>n3?n2:n3;
}
