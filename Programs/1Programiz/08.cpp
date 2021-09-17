// C Program to Check Whether a Character is an Alphabet or not

#include <iostream>
using namespace std;
int main()
{

     char c;
     cout<<"enter a character\n";
     cin>>c;
     // cout<<(int)c<<endl;
     // if((c>=65 &&c<=90 )|| (c>=97 && c<=122 ) )
     // cout<<c<<" is an alphabet\n";
     // else
     // cout<<c<<" is not  an alphabet";

     if((c>='a' && c<='z') || (c>='A' && c<= 'Z'))
     cout<<"its an alphabet";
     else
     cout<<"not an alphabet";

}