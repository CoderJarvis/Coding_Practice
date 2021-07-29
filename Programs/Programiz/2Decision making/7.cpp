#include <iostream>
using namespace std;
int main()
{

     char c;
     cout<<"enter a character\n";
     cin>>c;
     cout<<(int)c<<endl;
     if(((int)c>=65 && (int)c<=90 )|| ((int)c>=97 && (int)c<=122 ) )
     cout<<c<<" is an alphabet\n";
     else
     cout<<c<<" is not  an alphabet";




cout<<'\n';
}