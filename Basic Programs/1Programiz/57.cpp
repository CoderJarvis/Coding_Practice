// C Program to Store Information of a Student Using Structure.

#include <iostream>
using namespace std;
struct student
{   
    string name;
    string regno;
    int roll;
    string department;
    string phoneno;
    string address;
    int Securedmark;
};
int main()
{

     struct student s1;
     s1.name="saswat kumar sk";
     s1.regno="1905289030";
     s1.roll=30;
     s1.department="2nd year MCA";
     s1.phoneno="9853319315";
     s1.address="panikoili,jajpur";
     s1.Securedmark=372;

     cout<<"displaying the information";
     cout<<"\nname :"<<s1.name;
     cout<<"\nreg no :"<<s1.regno;
     cout<<"\nroll :"<<s1.roll;
     cout<<"\ndepartment :"<<s1.department;
     cout<<"\nphone no :"<<s1.phoneno;
     cout<<"\naddres :"<<s1.address;
     cout<<"\nsecured mark :"<<s1.Securedmark;

}
