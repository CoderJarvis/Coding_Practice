#include <bits/stdc++.h>
using namespace std;
class KeypadPhone
{
    public:
    void camera()
    {
        cout<<"this phone has 2mp camera"<<endl;
    }
    void game()
    {
        cout<<"you can play only snake game using this phone"<<endl;
    }
    void message()
    {
        cout<<"this phone can only send message"<<endl;
    }
};

class SmartPhone : public KeypadPhone
{
    public:
    void camera()
    {
        cout<<"this phone has 108mp camera"<<endl;
    }
    void game()
    {
        cout<<"you can play pubg, cod etc. using this phone"<<endl;
    }
    void message()
    {
        cout<<"you can send message as well as send mms using this phone"<<endl;
    }
};
int main()
{
    KeypadPhone ob1;
    SmartPhone ob2;
    ob1.camera();
    ob1.game();
    cout<<endl;
    ob2.game();
    ob2.message();
    ob2.camera();
}