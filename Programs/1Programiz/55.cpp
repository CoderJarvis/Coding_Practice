// C Program to Copy String Without Using strcpy()

#include <iostream>
using namespace std;
int main()
{

    //  string st1="saswat kumar sk";
    //  string st2[30];

    // int i=0;
    //  while (st1[i]!='\0')
    //  {
    //      st2[i]=st1[i];

    //      i++;
    //  }
    // //  cout<<st2<<endl;
    // printf("%s",st2);

  //  int st1[30]={10,20};
  //  cout<<st1[29]; //unused spaces filled with 0 in array


//program not working in c++


    char st1[30]="saswat kumar sk";
    char st2[30];
    // cout<<st2[20]; //unused spaces filled with '\0' and n0 output in string
    int i=0;
    while (st1[i]!='\0')
    {
        st2[i]=st1[i];

        i++;
    }
    st2[i]='\0'; //important

    printf("%s",st2);
    



}
