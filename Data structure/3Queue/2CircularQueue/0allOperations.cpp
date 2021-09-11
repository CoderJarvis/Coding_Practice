#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
    cout<<"enter the elements\n";
    int x;
    cin>>x;

    if((rear+1)%N==front)
    {
        cout<<"queue is full\n";
    }
    else if(rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
}
void dequeue()
{

}
void traversal()
{

}
int main()
{
     cout<<"1-enque\n";
     cout<<"2-dequeue\n";
     cout<<"3-traversal\n";
     cout<<"4-exit\n";
     
     while (1)
     {
         int c;
         cin>>c;
         switch(c)
         {
             case 1:
             enqueue();
             break;
             case 2:
             dequeue();
             break;
             case 3:
             traversal();
             break;
             case 4:
             exit(0);
             break;
         }
     }
     


}