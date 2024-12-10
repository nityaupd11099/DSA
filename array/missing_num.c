#include <stdio.h>
#include<stdlib.h>
int missing_num(int arr , int n , int s)
{
    int sum=0;
    for(int i=0;i<n ;i++)
    {
        sum=sum+arr[i];

    }
    int sl=(s *s+1)/2;
    int miss=sl-sum;
    return miss;
}
int main()
{ int arr[8]={2,3,5,7,9,13};
int n=sizeof(arr)/sizeof(int);
 int s=arr[n-1];
printf("%d" , missing_num(arr , n , s));


    return 0;
}
