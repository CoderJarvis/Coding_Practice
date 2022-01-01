// Swapping two Numbers using a Temporary Variable.

#include <iostream>
using namespace std;
int main()
{
    //using third variable
    int n1,n2;
    cin>>n1>>n2;
    int t;
    t=n1;
    n1=n2;
    n2=t;
    cout<<n1<<" "<<n2<<endl;
    
    //using 2 variable
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<n1<<" "<<n2;
}
