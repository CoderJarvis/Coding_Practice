// not completed
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int r;
    string st="hy";
    string c;
    while(n)
    {
        r=n%10;
        c=to_string(r);
        st=st+c;
        n=n/2;
    }
    cout<<st;
      
}