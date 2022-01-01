// C Program to Convert Binary Number to Decimal and vice-versa

#include <iostream>
#include <math.h>
using namespace std;
void convertDecimal()
{
    long long n;
    cout<<"enter the binary number\n";
    cin>>n;
    int r;
    int i=0;
    int sum=0;

    while (n!=0)
    {
        r=n%10;
        sum=sum+r*pow(2,i);
        
        n=n/10;
        i++;
    }

}
int main()
{
    int opt;
    cout<<"what you want to do :\n";
    cout<<"1-Binary to decimal\n2-Decimal to Binary\n";
    cin>>opt;
    if (opt==1)
    {
        convertDecimal();
    }
    else
    {
        // convertBinary();
    }
    
}
