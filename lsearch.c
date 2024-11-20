  #include <stdio.h>
#include<stdlib.h>
struct Array {
    int A[10];
     int length;
};
 int linearsearch( struct Array arr , int num)
{for (int i=0 ; i<arr.length ; i++)

    {
    if (num==arr.A[i]){
        printf("found at %d" , i );
    }
    printf("not found");
}
}

int main()
{
    struct Array arr={2,3, 4,45  ,5, 6 ,7};
    printf("%d\n", linearsearch(arr, 6));


    return 0;
}