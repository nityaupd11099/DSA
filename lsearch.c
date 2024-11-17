  #include <stdio.h>
#include<stdlib.h>
struct Array {
    int A[10];
    length;
};
linearsearch( struct Array arr , int num)
{for (int i=0 ; i<arr.length ; i++)

    {
    if (num==arr.A[i]){
        return 1;
    }
    return -1;
}

int main()
{
    struct Array arr={2,3 4,45 5, 6 ,7};
    printf("%d\n", linearsearch(arr, 6);


    return 0;
}