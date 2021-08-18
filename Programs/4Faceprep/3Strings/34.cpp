#include <iostream>
using namespace std;
int main()
{
     string st1="abbbba";
     string st2;
     for(int i=st1.length();i>=0;i--)
     {
         st2.push_back(st1[i]);
     }
     cout<<st1<<endl<<st2<<endl;
    if(st1==st2)
    cout<<"palindrome";
    else
    cout<<"not";


}