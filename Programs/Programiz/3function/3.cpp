#include <iostream>
using namespace std;
int prime(int n)
{
    int flag=1;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
        
    }

    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}


int armstrong(int n)
{   
    int temp=n;
   int sum=0;
   int r;
   while (n!=0)
   {
        r=n%10;
       sum=sum+r*r*r;

       n=n/10;
   }
   if (sum==temp)
   {
       return 1;
   }
   else
   {
       return 0;
   }
   
   
   
}

int main()
{
    int n;
     cin>>n;

    if (prime(n))
    {
        cout<<n<<" is a prime number\n";
    }
    else
    {
        cout<<n<<" is not a prime number\n";
    }
    if (armstrong(n))
    {
        cout<<n<<" is a armstrong number\n";
    }
    else
    {
        cout<<n<<" is not a armstrong number\n";
    }


    
    




cout<<endl;
}