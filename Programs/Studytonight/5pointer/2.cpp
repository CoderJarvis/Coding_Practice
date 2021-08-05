#include <iostream>
using namespace std;
int main()
{

     cout<<"enter the number of elements\n";
     int n;
     cin>>n;
     int *p;
     p=(int*)malloc(n*sizeof(int));

     cout<<"enter the "<<n<<" elements\n";
     int sum=0;
     for(int i=0;i<n;i++)
     {
         scanf("%d",(p+i));
         sum=sum+*(p+i);
     }
     cout<<"the array elements are\n";
       for(int i=0;i<n;i++)
     {
        printf("%d ",*(p+i));
     }

     cout<<"\narray sum is :"<<sum;


}