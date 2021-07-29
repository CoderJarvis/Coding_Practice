#include <stdio.h>
#include <string.h>
int main()
{
   char st[1000];
   gets(st);
//    printf("%s",st);
   int c[10];
   for (int i = 0; i < 10; i++)
   {
	   c[i]=0;
   }

   for (int i = 0; i < strlen(st); i++)
   {
	   if (st[i]=='0')
	   {
		   c[0]++;
	   }
	  else if (st[i]=='1')
	   {
		   c[1]++;
	   }
	  else if (st[i]=='2')
	   {
		   c[2]++;
	   }
	  else if (st[i]=='3')
	   {
		   c[3]++;
	   }
	  else if (st[i]=='4')
	   {
		   c[4]++;
	   }
	  else if (st[i]=='5')
	   {
		   c[5]++;
	   }
	  else if (st[i]=='6')
	   {
		   c[6]++;
	   }
	  else if (st[i]=='7')
	   {
		   c[7]++;
	   }
	  else if (st[i]=='8')
	   {
		   c[8]++;
	   }
	  else if (st[i]=='9')
	   {
		   c[9]++;
	   }
   }

	    for (int i = 0; i < 10; i++)
   {
	   printf("%d ",c[i]);
   }


	   
   
   
   





	  return 0;
}