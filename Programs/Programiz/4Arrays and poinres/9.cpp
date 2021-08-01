#include <iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    *p1=111;
    *p2=222;

}
int main()

{

    int n1,n2;
    cin>>n1>>n2;

    swap(&n1,&n2);
    cout<<n1<<endl<<n2;


}