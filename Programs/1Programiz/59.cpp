// C Program to Add Two Complex Numbers by Passing Structure to a Function

#include <iostream>
using namespace std;
typedef struct complex
{
    float real;
    float img;

}comp;

int main()
{
    comp c1,c2,result;
    cin>>c1.real>>c1.img>>c2.real>>c2.img;

    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;

    cout<<"addition :"<<result.real<<"i +"<<result.img;
}
