// C Program to Check Leap Year

#include <iostream>
using namespace std;
int main()
{

     int yr;
     cin>>yr;
     if(yr%400==0 || (yr%4==0 && yr%100!=0))
     {
         cout<<yr<<" is leap year\n";
     }
     else
     {
         cout<<yr<<" not a is  leap year\n";

     }

}