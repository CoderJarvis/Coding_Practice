#include <stdio.h>
int findtotalmarks(int arr[],int n,char gender)
{   
    int sum=0;
    if(gender=='b')
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum=sum+arr[i];
            }
        }
    }

    if(gender=='g')
    {
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                sum=sum+arr[i];
            }
        }
    }
    return sum;
}
int main()
{   
    int n;
    char gender;
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

    scanf(" %c",&gender);

   int ans= findtotalmarks(arr,n,gender);
   printf("%d",ans);
    



      return 0;
}