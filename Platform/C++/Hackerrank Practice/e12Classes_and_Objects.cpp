#include <iostream>
using namespace std;
class studentmark
{   public:
    int m1,m2,m3,m4,m5;
};
int main()
{   int n;
    cin>>n;
    int count=0;
    studentmark ob[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ob[i].m1>>ob[i].m2>>ob[i].m3>>ob[i].m4>>ob[i].m5;
    }

    int mark[n];

    for (int i = 0; i < n; i++)
    {
        mark[i]=ob[i].m1+ob[i].m2+ob[i].m3+ob[i].m4+ob[i].m5;
    }
    for (int i = 0; i < n; i++)
    {
       if(mark[i]>mark[0])
       count++;
    }

    cout<<count;


cout<<'\n';
}