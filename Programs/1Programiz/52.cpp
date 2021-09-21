// C Program to Remove all Characters in a String Except Alphabets.
//NSB

#include <iostream>
using namespace std;
int main()

{
    string st="papun*3hahaha5^$@(-_saswat515sk36783!`2836^tcs";

    for(int i=0;i<st.length();i++)
    {
        if ((st[i]>='A' && st[i] <= 'Z') || (st[i]>='a' && st[i]<='z'))
        {
            cout<<st[i];
        }
    }

    //    string str;
    //    cout<<"enter your name\n";
    //    cin>>str; //not work in multi word inputs
    //    getline(cin,str);//so we use getline
    //    cout<<"your name is "<<str;

}
