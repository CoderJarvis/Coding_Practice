#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int vowelCount=0,consonentCount=0,digitCount=0,whiteSpaceCount=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
        vowelCount++;
        else if((st[i]>='a' && st[i]<='z' ) || (st[i]>='A' && st[i]<='Z'))
        consonentCount++;
        else if(st[i]>='0' && st[i]<='9')
        digitCount++;
        else if(st[i]==' ')
        whiteSpaceCount++;
    }

    cout<<"vowel :"<<vowelCount<<endl;
    cout<<"consonent :"<<consonentCount<<endl;
    cout<<"digit :"<<digitCount<<endl;
    cout<<"white spaces :"<<whiteSpaceCount<<endl;
}