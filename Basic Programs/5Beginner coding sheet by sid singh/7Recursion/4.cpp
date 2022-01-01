#include <iostream>
using namespace std;
int power(int base,int expo)
{
    if(expo==1)
    return base;
    else if(expo==0)
    return 1;
    else
    return base*power(base,expo-1);
}
int main()
{
    int base,expo;
    cin>>base>>expo;
    cout<<power(base,expo);
}