#include <iostream.h>
int main() {
    int num;
    printf("Enter an integer: ");
    cin>>num;

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        cout<<num<<" is a Even\n";
    else
        cout<<num<<" is a odd\n";
    
    return 0;
}