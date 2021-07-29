#include <stdio.h>
int findnthterm(int n1,int n2,int n3,int term)
{
    if(term == 1)
    {
        return 1;
    }
    else if (term ==2)
    {
        return 2;
    }
    else if(term==3)
    {
        return 3;
    }
    else{
        return findnthterm(n1,n2,n3,term-1)+ findnthterm(n1,n2,n3,term-2)+findnthterm(n1,n2,n3,term-3);
    }
}
int main()
{
   int n1,n2,n3,term;
   scanf("%d%d%d%d",&term,&n1,&n2,&n3);
   int ans=findnthterm(n1,n2,n3,term);
   printf("%d",ans);





    printf("\n");
      return 0;
}
