// C Program to calculate a Number raised to the Power of N using Recursion

#include <iostream>
using namespace std;
int power(int b,int e)
{
    if(e==0)
    return 1;

    else
    return b*power(b,e-1);
}
int main()
{

     int b,e;
     cin>>b>>e;

    cout<< power(b,e);


}