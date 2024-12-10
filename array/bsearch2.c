#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[15];
    int size;
    int length;
};
int binarysearch(int a[], int low, int high, int key){
    int mid;
    while(low<=high)
{mid=(low+high)/2;
if(key==arr.A[mid]){
    return mid;
}
else if(key<=arr.A[mid])
return binarysearch(a, low, mid-1,key);
else (key>=arr.A[mid])
return binarysearch(a, mid+1, high, key) ;
return -1;
}

int main()
{ struct Array arr{2,3,4,5,6,778,9};
printf("%d" , binarysearch(arr.A , 0, arr.length ,4));


    return 0;
}
