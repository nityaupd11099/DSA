#include <stdio.h>
#include<stdlib.h>
int sum(int n )
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int iterative_sum(int n)
{
    int s=0;
    for (int i=0;i<n ; i++)
    {
        s=s+i;
        return s;
    }
}

int main()
{
int r,d;
 r=sum(6);
printf("d" , r);
d=iterative_sum(6);
printf("d" , d);

    return 0;
}