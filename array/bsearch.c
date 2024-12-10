#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
int binarysearch(struct Array arr, int key){
    int low,high,mid;
    low=0;
    high=arr.length-1;
    while(low<=high)
{mid=(low+high)/2;
if(key==arr.A[mid]){
    return mid;
}
else if(key<=arr.A[mid])
high= mid-1;
else 
low=mid+1;
}
return -1;
}
int main()
{struct Array arr={2,3,4,5,6,7,8,9};
printf("%d " , binarysearch(arr, 8));



    return 0;
}