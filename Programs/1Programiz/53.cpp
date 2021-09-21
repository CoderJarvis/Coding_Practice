// C Program to Find the Length of a String

#include <iostream>
using namespace std;
int main()
{

    string st;
    //  cin>>st;//dont do this in the name of coding
    getline(cin,st);

    // cout<<st<<endl;
    // cout<<st.length();
    int i=0;
    int c=0;
    while (st[i]!='\0')
    {
        c++;
        i++;
    }
    cout<<c;

//this proves in the end of the every string there is alwys a '\0'


    // char st[20];
    // gets(st);

    // int i=0;
    // int c=0;
    // while(st[i]!='\0')
    // {
    //     c++;
    //     i++;
    // }
    // cout<<c;



}
