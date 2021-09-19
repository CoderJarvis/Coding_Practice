// C Program to Find GCD of two Numbers

#include <iostream>
using namespace std;
int main()
{
     int n1,n2;
     int hcf;
     cin>>n1>>n2;
     int lower=n1>n2?n2:n1;
    for (int i = 1; i <= lower; i++)
    {
        if(n1%i==0 && n2%i==0)
        hcf=i; //hcf or gcd is the heighest divisor of both the numbers
    }
    cout<<hcf<<endl;

}