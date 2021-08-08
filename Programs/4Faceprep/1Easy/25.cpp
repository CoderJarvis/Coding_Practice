// Harshad number
// the sum of the digits of the number is divisible by the number

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int temp=n;

    int sumOfDigits=0;
    int r;
    while(n!=0)
    {
        r=n%10;
        sumOfDigits=sumOfDigits+r;

        n=n/10;
    }
    cout<<sumOfDigits<<endl;

    if(temp%sumOfDigits==0)
    cout<<"its a Harshad number\n";
    else 
    cout<<"not a harshad number\n";
}