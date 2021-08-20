#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     string st="saswat kumar sk";
  

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