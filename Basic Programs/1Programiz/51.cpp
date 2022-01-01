// C Program to Count the Number of Vowels, Consonants and so on.

#include <iostream>
using namespace std;
int main()
{
    string st="saswat kumar sk";
    int countVowel=0;
    int countConsonant=0;

    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        {
            countVowel++;
        }
        else if(st[i]!=' ')
        {
            countConsonant++;
        }
    }

    cout<<"vowel "<<countVowel<<endl<<"consonent "<<countConsonant;
}
