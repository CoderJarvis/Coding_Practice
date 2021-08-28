#include <iostream>
using namespace std;
class student
{   public:
    int roll;
    string firstname;
    string secondname;
    int age;
};


int main()
{
    student ob;
    cin>>ob.roll>>ob.firstname>>ob.secondname>>ob.age;

    cout<<ob.roll<<endl<<ob.secondname<<", "<<ob.firstname<<endl<<ob.age<<endl<<endl;

    cout<<ob.roll<<","<<ob.firstname<<","<<ob.secondname<<","<<ob.age;
     



cout<<'\n';
}