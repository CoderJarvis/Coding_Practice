#include <iostream>
using namespace std;
int main()
{

//    string str;
//    cout<<"enter your name\n";
//     // cin>>str; //not work in multi word inputs
//     getline(cin,str);//so we use getline
//    cout<<"your name is "<<str;

string st="sasawat515sk";

for(int i=0;i<st.length();i++)
{
    if (!(st[i]>='A' && st[i] <= 'Z') && (!(st[i]>='a' && st[i]<='z')) && st[i]!='\0' )
    {
        st[i]=st[i+1];
    }
}

cout<<st;





}