#include <bits/stdc++.h>
using namespace std;
class Sum
{   
    public:
    int checkSum(int a,int b)
    {
        return a+b;
    }
    int checkSum(int a,int b,int c)
    {
        return a+b+c;
    }
    int checkSum(int a,int b,int c,int d)
    {
        return a+b+c+d;
    }
};

int main()
{   
    Sum ob;
    cout<<ob.checkSum(11,22)<<endl;
    cout<<ob.checkSum(11,22,33)<<endl;
    cout<<ob.checkSum(11,22,33,44)<<endl;
}