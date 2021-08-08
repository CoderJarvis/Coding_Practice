#include <iostream>
using namespace std;
int main()
{

     char c;
     cin>>c;
     if((int)c>=65 && (int)c<=90 || (int)c>=97 && (int)c<=122)
     {
         cout<<"its an alphabet\n";
     }
     else
     cout<<"not an alphabet";

     cout<<(int)c;




}