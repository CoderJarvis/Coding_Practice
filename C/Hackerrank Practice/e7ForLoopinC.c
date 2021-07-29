#include <stdio.h>
int main()
{
   int n1,n2;
  scanf("%d%d",&n1,&n2);
  for(;n1<=n2;n1++)
{
    
  if(n1==1)
  {
      printf("one\n");
  }
 else if(n1==2)
  {
      printf("two\n");
  }
 else if(n1==3)
  {
      printf("three\n");
  }
 else if(n1==4)
  {
      printf("four\n");
  }
 else if(n1==5)
  {
      printf("five\n");
  }
 else if(n1==6)
  {
      printf("six\n");
  }
 else if(n1==7)
  {
      printf("seven\n");
  }
 else if(n1==8)
  {
      printf("eight\n");
  }
 else if(n1==9)
  {
      printf("nine\n");
  }

  else{
      if(n1%2==0)
      printf("even\n");
      else{
          printf("odd\n");
      
  }


  }

}


   return 0;
}
