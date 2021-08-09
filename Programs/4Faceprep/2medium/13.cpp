#include <iostream>
using namespace std;
int reverse(int x)
{
    int temp=x;
    int rev=0;
    int r;

        while (x)
        {
            r=x%10;
            rev=rev*10+r;

            x=x/10;
        }

    return rev;
    
}

void print(int x)
{
        if(x==0)
        cout<<"zero ";
        else if(x==1)
        cout<<"one ";
        else if(x==2)
        cout<<"two ";
        else if(x==3)
        cout<<"three ";
        else if(x==4)
        cout<<"four ";
        else if(x==5)
        cout<<"five ";
        else if(x==6)
        cout<<"six ";
        else if(x==7)
        cout<<"seven ";
        else if(x==8)
        cout<<"eight ";
        else if(x==9)
        cout<<"nine ";
}
int main()
{
    int n;
    cin>>n;

    int rev=reverse(n);
    int r;
        while (rev)
        {
            r=rev%10;
            print(r);

            rev=rev/10;
        }
     


}