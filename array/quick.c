#include <stdio.h>
#include<stdlib.h>
int swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int partition(int A[], int l , int h )
{ int pivot=A[l];
    int i=l;
    int j =h;
    do
{
    do{i++;}while (A[i]<=pivot);
    do{j--;}while (A[j]>pivot);
    if(i<j)
        swap(&A[i], &A[j]);
}while(i<j);
swap(&A[l] , &A[j]);
return j;
}

void quicksort(int A[] , int l , int h)
{ int j=h;
    if(l<h)
    {
        partition(A, l, h);
        quicksort(A,l,j);
        quicksort(A, j+1, h);
    }
}
int main()
{ int A[10]={2,5,3,4,7,6,8,9 ,23,INT_MAX}, n=10;
quicksort(A,2,INT_MAX);
for(int i=0;i<n;i++)
{
    printf("%d " , A[i]);
}


    return 0;
}



