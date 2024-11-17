#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
void swap(&arr->A[i] ,&arr->A[j])
 {
 int temp=*arr->A[i];
 *arr->A[i]=*arr->A[j];
 *arr->A[j]=temp;
 }

}
int main()
{
struct Array arr={0,-1,2,-4,4,6,7,9,-3,-7};
swap(*arr);
    return 0;
}

