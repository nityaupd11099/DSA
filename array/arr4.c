#include <stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
   for(int i=0; i<=arr.length; i++)
{
    printf("%d" , arr.A[i]);
}

}
int main()
{ int n;
    struct Array arr;
    arr.A=(int *) malloc(arr.size *sizeof(int));
    printf("enter size");
    scanf("%d", arr.size);
    arr.length=0;
    printf("enter elements:");
    for (int i=0 ; i <=n ; i++)
    
        scanf("%d" , &arr.A[i]);
    arr.length=n;
    

display(arr);


    return 0;
}