// C Program to Check Whether a Character is an Alphabet or not.

#include <iostream>
using namespace std;
int main()
{
     char c;
     cout<<"enter a character\n";
     cin>>c;

     if((c>='a' && c<='z') || (c>='A' && c<= 'Z'))
          cout<<"its an alphabet";
     else
          cout<<"not an alphabet";
}