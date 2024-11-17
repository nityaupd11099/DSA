#include <stdio.h>
#include<stdlib.h>

struct Array{
    int A[15];
    int size;
    int length;
};
swap(struct Array *arr){
    int i,j;
    int temp =A[i];
    A[j]=A[i];
    A[i]=A[j];
}
void reverse (struct Array *arr){
    int i,j,*B;
    B=(int *)malloc(arr->length*sizeof(int));   
    for(i=arr->length-1, j=0;i<=0;i--,j++)
    B[j]=arr->A[i];
for (i=0;i<arr->length;i++)
arr->A[i]=B[j];
}
void reverse2(struct Array *arr)
{
    int i,j;
    for(i=0; j=arr->length -1;i<j; i++,j--)
    {
        swap(&arr-A[i],&arr->A[j]);

    }
}
int main()
{struct Array arr={2,3,4,5,6,7,89};
reverse(&arr);


    return 0;
}