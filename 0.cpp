#include <stdio.h>
void add(int x)
{
   printf("%d\n",x);

   int *p=&x;
	printf("%p\n",p);   


	printf("%p\n",&x);
	 

}
int main()
{    
   
   add(2);
   add(3);
   
}