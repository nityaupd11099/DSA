#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
void insert (struct Array *arr , int x ){
int i=arr->length-1;
if (arr->length==arr->size)
    return;
while(i>=0 && x<arr->A[i])
{
    arr->A[i+1]=arr->A[i];
    i--;
}
arr->A[i+1]=x;
 }
int IsSorted(struct Array arr){
     for(int i=0;i<=arr.length;i++){
        if(arr.A[i]=arr.A[i+1])
        return 0;
     }
     return 1;
 }
int main()
{
struct Array arr={2,4,6,7,9};
insert(&arr, 5);
IsSorted(arr);
    return 0;
}