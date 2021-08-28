// Program to find the quadrant in which the given coordinates lie

#include <iostream>
using namespace std;
int main()
{

     int x,y;
     cin>>x>>y;

     if(x>0 && y>0)
     cout<<"1st Quandrant";
     else if(x<0 && y>0)
     cout<<"2nd Quandrant";
     else if(x<0 && y<0)
     cout<<"3rd Quandrant";
     else if(x>0 && y<0)
     cout<<"4th Quandrant";
     else
     cout<<"its the origin";


}