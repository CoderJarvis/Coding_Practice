#include <bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int roll;
    string name;

    public:
    void setRoll(int x)
    {
        roll=x;
    }
    void setName(string y)
    {
        name=y;
    }
    int getRoll()
    {
        return roll;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    Student ob1,ob2;
    ob1.setRoll(10);
    ob1.setName("saswat");
    cout<<ob1.getName()<<" "<<ob1.getRoll()<<endl;
    ob2.setRoll(20);
    ob2.setName("samay");
    cout<<ob2.getName()<<" "<<ob2.getRoll()<<endl;
}