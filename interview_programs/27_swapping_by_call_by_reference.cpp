// C Program Swap Numbers in Cyclic Order Using Call by Reference

#include <iostream>
using namespace std;
void swap(int *p1,int *p2)
{
    *p1=*p1+*p2;    //org value will be changed
    *p2=*p1-*p2;    //bcoz address is passed not the copy of the variable
    *p1=*p1-*p2;
}
int main()

{
    int n1,n2;
    cin>>n1>>n2;

    swap(&n1,&n2);
    cout<<n1<<endl<<n2;
}
