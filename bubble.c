#include <stdio.h>
#include<stdlib.h>
int swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }

void bubblesort(int A[], int n )
{
    int i,j;
     int flag=0;
    for(i=0;i<n-1;i++){
        flag=0;
        for (j=0;j<n-1-i;j++){
            if(A[j]=A[j+1])
            swap(  &A[j] ,  &A[j+1]);
        flag=1;
        }
        if (flag==0)
        break;
    }
}
int main()
{ int A[10]={2,4,7,4,6,3,9} ,  n=10;
bubblesort(A, 10);
for(int i=0;i<n;i++){
    printf("%d", A[i]);
}

    return 0;
}



