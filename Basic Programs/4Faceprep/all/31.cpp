// Program to find the frequency of characters in a string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st="s@a8wa$99t (k#(^u9ar6 _6sk";
  

     int arr[256]={0};//initilizing to each aary element is eesential it ll work as count later
     for(int i=0;i<st.length();i++)
     {
         arr[st[i]]++;
     }
     for(int i=0;i<256;i++)
     {
         if(arr[i]!=0)
         cout<<(char)i<<" "<<arr[i]<<endl;
     }

}