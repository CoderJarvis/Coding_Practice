#include <bits/stdc++.h>
using namespace std;
class Phone
{   
    virtual void call()=0;
    virtual void message()=0;
};
class SmartPhone : public Phone
{
    public:
    void call()
    {
        cout<<"you can call using this phone"<<endl;
    }
    void message()
    {
        cout<<"you can message using this phone"<<endl;
    }
    void internet()
    {
        cout<<"you can use internet using this phone"<<endl;
    }
    void game()
    {
        cout<<"you can play pubg using this phone"<<endl;
    }
};
int main()
{
    SmartPhone ob;
    ob.call();
    ob.internet();
    ob.game();
}