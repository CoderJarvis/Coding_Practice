#include <stdio.h>
int big(int i1,int i2,int i3,int i4)

{
    return i1>i2 && i1>i3 && i1>i4?i1:i2>i3 && i2>i4?i2:i3>i4?i3:i4 ;

}
    

int main()
{

int i1,i2,i3,i4;
scanf("%d%d%d%d",&i1,&i2,&i3,&i4);
int i5=big(i1,i2,i3,i4);
printf("%d",i5);





printf("\n");
}
