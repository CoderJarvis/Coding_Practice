// C Program to Add Two Distances (in inch-feet system) using Structures

#include <iostream>
using namespace std;
typedef struct distance
{
    int feet;
    float inch;

}dis;
int main()
{

     dis d1,d2,result;
     cin>>d1.feet;
     cin>>d1.inch;
     cin>>d2.feet;
     cin>>d2.inch;

     result.feet=d1.feet+d2.feet;
     result.inch=d1.inch+d2.inch;

     cout<<"sum of the distances : "<<result.feet<<"' "<<result.inch<<"\"";




}