#include <stdio.h>
void main(){
    int a;
    int *p=&a;
    *p=10;
    switch(a/2)
    {
        case 0:
            printf("Case NULL\n");
            break;
        case p: 
            printf("Case ZERO\n");
            break;
        default: 
            printf("DEFAULT\n");
            break;
    } 
}