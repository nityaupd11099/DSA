#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
void swap(*arr->A[i] ,*arr->A[j])
 {
 int temp=&arr->A[i];
 &arr->A[i]=&arr->A[j];
 &arr->A[j]=temp;
 }
void rearrange(struct Array *arr)
{ int i, j ;
i=0;
j=arr->length-1;
while(i<j){
    while(arr->A[i]>=0)j--;
    while(arr->A[i]<0) i++;

    { if (i<j)
    swap(&arr->A[i] ,&arr->A[j]);     }
}

}
int main()
{
struct Array arr={0,-1,2,-4,4,6,7,9,-3,-7};
rearrange(&arr);
    return 0;
}