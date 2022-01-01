// Find all possible permutations in which 'n' people can occupy 'r' seats in a theater

#include <iostream>
using namespace std;
int fact(int x)
{   
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
     int people;
     int rows;
     cin>>people>>rows;

     int noofways=fact(people)/fact(people-rows);
     cout<<noofways;
     //applying P(n,r)=n!/(n-r)!


}