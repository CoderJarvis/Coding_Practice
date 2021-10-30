#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int largest=a>b&&a>c?a:b>c?b:c;
    cout<<"largest is :"<<largest<<endl;
}