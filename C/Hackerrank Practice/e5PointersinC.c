#include <stdio.h>
void change(int *p1,int *p2)
{   int temp=*p1;
   *p1=*p1+*p2;
   *p2=temp>*p2?temp-*p2:*p2-temp;

   
}


int main()
{
   int n1,n2;
   scanf("%d%d",&n1,&n2);

    int *ptr1=&n1;
    int *ptr2=&n2;

    change(ptr1,ptr2);
    printf("%d\n%d",n1,n2);


    printf("\n");
      return 0;
}
