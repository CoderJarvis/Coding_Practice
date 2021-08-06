#include <iostream>
using namespace std;
int main()
{

      int i;
    for(i=0; i< 5; i++)
    {
        if(i*i > 30 )
            goto lbl;
        else
            printf("%d",i);
    lbl:
        printf("IHelp ");
 
    }
     


cout<<'\n';
}