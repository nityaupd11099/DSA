#include <stdio.h>
#include<stdlib.h>

int main()
{


    return 0;
}


struct Array{
    int A[15];
    int size;
    int length;
};



void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }