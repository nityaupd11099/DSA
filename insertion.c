#include <stdio.h>
#include<stdlib.h>
void insertion(int A[],  int n){
    int j,i,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && x>A[j])
        {
            A[j+1]=A[j];
            j--;

        }
        A[j+1]=x;
    }
}
int main()
{ int A[10]={2,5,3,4,7,6,8,9}, n=10;
insertion(A, n);
for(int i=0;i<n;i++)
{
    printf("%d " , A[i]);
}


    return 0;
}



void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }