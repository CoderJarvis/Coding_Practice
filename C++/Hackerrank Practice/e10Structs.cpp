#include <iostream>
using namespace std;
typedef struct employee
{
    int slNo;
    string firstname;
    string secondname;
    int age;
}emp;
int main()
{   emp e1;
cin>>e1.slNo>>e1.firstname>>e1.secondname>>e1.age;

cout<<e1.slNo<<" "<<e1.firstname<<" "<<e1.secondname<<" "<<e1.age;

     



cout<<'\n';
}