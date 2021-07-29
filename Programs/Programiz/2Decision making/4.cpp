#include <iostream>
#include<cmath>
using namespace std;
int main()
{

     int a,b,c;
     cout<<"enter the quadratic equation\n";
     cin>>a>>b>>c;
     cout<<"the equatuion is\n";
     cout<<a<<"x.x + "<<b<<"x "<<"+"<<" c ";

cout<<"finding the root\n";
double dis=b*b-4*a*c;

if(dis>0)
{
    double d1=(-b+sqrt(dis))/(2*a);
    double d2=(-b-sqrt(dis))/(2*a);
    cout<<"root 1 = "<<d1<<" root2 = "<<d2;
}

else if(dis==0)
{
    double d1=-b/(2*a);
     cout<<"root 1 = "<<d1<<" root2 = "<<d1;
}
else{
    double real= -b/(2*a);
    double img=sqrt(-dis)/(2*a);

    double d1=real;
    double d2=img;
    cout<<"root 1 = "<<d1<<" root2 = "<<d2<<"i"<<endl;
}


cout<<'\n';
}