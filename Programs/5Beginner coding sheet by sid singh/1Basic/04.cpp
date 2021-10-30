#include <iostream>
using namespace std;
int main()
{
    int devisor,divident;
    int quotient,remainder;
    cin>>divident>>devisor;
    quotient=divident/devisor;
    remainder=divident%devisor;
    cout<<"quotient is "<<quotient<<endl;
    cout<<"remainder is "<<remainder;
}