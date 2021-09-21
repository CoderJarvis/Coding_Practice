// C Program to Find the Length of a String

#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int i=0;
    int c=0;
    
    while (st[i]!='\0')
    {
        c++;
        i++;
    }
    cout<<c;
}
