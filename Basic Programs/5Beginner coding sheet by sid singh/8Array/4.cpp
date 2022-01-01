#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int *p=(int*)malloc(n*sizeof(int));
    cout<<"enter the elements into array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    cout<<"the array elements are"<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    
}