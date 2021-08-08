// C Program to Access Array Elements Using Pointer

#include <iostream>
using namespace std;
int main()
{

    //  int arr[5];
    //  for(int i=0;i<5;i++)
    //  {
    //      cin>>*(arr+i);
    //  }

    //  for(int i=0;i<5;i++)
    //  {
    //      cout<<*(arr+i)<<" ";
    //  }

      int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));

        //in c scanf needs address (arr+i) is already a address no no requir of &




}