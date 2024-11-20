#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void SelectionSort(int A[],int n)
{
 int i,j,k;

 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap(&A[i],&A[k]);
 }
}

int main()
{ int A[10]={2,6,4,5,7,8,9,3}, n=10;
    SelectionSort(A, n);
    return 0;
}