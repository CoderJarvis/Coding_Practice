#include <iostream>
using namespace std;
int main()
{
     string st;
     cin>>st;

     if(st == "break" || st == "case" ||st == "continue" ||st == "default" ||st == "else" ||st == "for" ||st == "func" ||st == "goto" ||st == "if" ||st == "map" ||st == "range" ||st == "return" ||st == "struct" ||st == "type" ||st == "var" ||st == "defer" )
     cout<<st<<" is a keyword";
     else
     cout<<st<<" is not a keyword";


}