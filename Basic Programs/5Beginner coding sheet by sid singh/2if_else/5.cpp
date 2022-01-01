#include <iostream>
using namespace std;
int main()
{
    int yr;
    cin>>yr;
    if(yr%400==0 || (yr%4==0 && yr%100!=0))
    cout<<yr<<" is a leap year"<<endl;
    else
    cout<<yr<<" is not a leap year"<<endl;
}