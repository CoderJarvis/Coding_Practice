// Pointer Comparison in C

#include <stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;
    
    if(ptrB > ptrA) //u have to do this 
        printf("PtrB is greater than ptrA\n");
        // printf("%d%d",*ptrA,*ptrB); //this shows unexpected op

    // return(0);

    // int *ptrA;
    // float *ptrB;
    
    // ptrA = (int *)1000;
    // ptrB = (float *)2000;
    
    // if(ptrB > ptrA) //doubt this shows arror
    //    printf("PtrB is greater than ptrA");

    // if(6>2.2f)//this doesnt shows eeror here
    
    return(0);

}