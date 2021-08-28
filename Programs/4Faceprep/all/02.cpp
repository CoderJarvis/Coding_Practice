// Check whether the given character is an alphabet or not

#include <iostream>
using namespace std;
int main()
{

     char c;
     cin>>c;
     if(c>=65 && c<=90 || c>=97 && c<=122)
     {
         cout<<"its an alphabet\n";
     }
     else
     cout<<"not an alphabet"<<endl;

     cout<<(int)c<<endl;

}