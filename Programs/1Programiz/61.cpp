// C Program to Store Data in Structures Dynamically

#include <iostream>
using namespace std;
typedef struct  student
{
    int mark;
    char subjct[20];
}stu;
int main()
{
    stu *ptr;
    int n;
    cout<<"enter the numner of student\n";
    cin>>n;
    ptr=(stu*)malloc(n*sizeof(stu));

    cout<<"enter subject and mark\n";
    for(int i=0;i<n;i++)
    {
        // cin>>ptr->subjct;
        // cin>>ptr->mark;

        scanf("%s%d",(ptr+i)->subjct,(ptr+i)->mark);
        // scanf("%d\n",&(ptr+i)->mark); //scanf in two lines  not woking
       
    }


    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",(ptr+i)->subjct,(ptr+i)->mark);
        // printf("%d\n",(ptr+i)->mark);
    }

}
