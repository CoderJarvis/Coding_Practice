#include <iostream>
using namespace std;
int leapyear(int x)
{
    if(x%400==0 ||(x%4==0 && x%100!=0))
    return 1;
    else
    return 0;
}
int main()
{
     int yr;
     cin>>yr;
     string month;
     cin>>month;

    if(month=="january" || month=="march" || month=="may" || month=="july" || month=="august" || month=="october" || month=="december")
    cout<<31;

    else if(month=="april" || month=="jun" || month=="september" || month=="november")
    cout<<30;


    else if(month== "february")
    {
        if(leapyear(yr))
        cout<<29;
        else
        cout<<28;
    }
     

}