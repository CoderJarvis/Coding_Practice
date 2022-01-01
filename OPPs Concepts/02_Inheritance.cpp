#include <bits/stdc++.h>
using namespace std;
class KeypadPhone
{   
    private:
    string company;
    string model;

    public:
    void call()
    {
        cout<<"this phone can call"<<endl;
    }
    void message()
    {
        cout<<"this phone can send message"<<endl;
    }
    void Offlinegame()
    {
        cout<<"you can play only snake game using this phone"<<endl;
    }

};

class SmartPhone : public KeypadPhone
{
    private:
    int IMEI_No;

    public:
    void camera()
    {
        cout<<"this phone can click photoes and record videos"<<endl;
    }
    void internet()
    {
        cout<<"you can use internet using this phone"<<endl;
    }
    void onlineGame()
    {
        cout<<"you can play pubg using this phone"<<endl;
    }
    
};
int main()
{
    KeypadPhone ob1;
    SmartPhone ob2;
    ob1.call();
    ob1.message();
    ob2.call();

    ob2.Offlinegame();
    ob2.internet();
    ob2.onlineGame();

}