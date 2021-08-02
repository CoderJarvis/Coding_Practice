#include <iostream>
using namespace std;

typedef struct timeperiod
{
    int  hour;
    int  minute;
    int  second;
}time;
int main()
{
    time t1,t2,diff;
    cout<<"enter time 1\n";
    cin>>t1.hour>>t1.minute>>t1.second;
    cout<<"enter time 12\n";
    cin>>t2.hour>>t2.minute>>t2.second;
    
   diff.hour= t1.hour>t2.hour?t1.hour-t2.hour:t2.hour-t1.hour;
   diff.minute= t1.minute>t2.minute?t1.minute-t2.minute:t2.minute-t1.minute;
   diff.second=t1.second>t2.second?t1.second-t2.second:t2.second-t1.second;
     
    cout<<diff.hour<<" "<<diff.minute<<" "<<diff.second;



}