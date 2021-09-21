// C Program to Find Largest Number Using Dynamic Memory Allocation

#include <iostream>
using namespace std;
int main()
{

     int *p=(int*)malloc(5*sizeof(int));    //malloc() returns (void*), so we have to typecast to (int*)
    

     for(int i=0;i<5;i++)
     {
         scanf("%d",p+i);
     }
     int max=*(p+0);
    // printf("%d",p[0]);
    for(int i=0;i<5;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    cout<<max;
}





