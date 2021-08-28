// Check whether the given character is an alphabet or not

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
     cout<<"not an alphabet"<<endl;

     cout<<(int)c<<endl;

}