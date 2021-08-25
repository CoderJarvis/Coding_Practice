#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
     int d=0; //each time will increases by 10
     char c='t';
     int x=0,y=0;

     while(n--)
     {
         switch(c)
         {
             case 't':
             d=d+10;    //1st step d=10 each time increases by 10
             x=x+d;

             c='u';
             break;

             case 'u':
             d=d+10;    //2nd step d=20
             y=y+d;

             c='l';
             break;
             
             case  'l':
             d=d+10;    //d=30
             x=x-d;

            
             c='d';
             break;

             case 'd':
             d=d+10;    //d=40
             y=y-d;
             
           
             c='r';
             break;

             case 'r':
             d=d+10;   //d=50
             x=x+d;   

             c='t';

         }
     }

     cout<<x<<" "<<y;


}