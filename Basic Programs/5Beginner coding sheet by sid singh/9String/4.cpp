#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int length=0;
    int i=0;
    while(st[i]!='\0')
    {
        length++;
        i++;
    }
    cout<<length;

}