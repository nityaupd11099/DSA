#include <stdio.h>
#include<stdlib.h>
int fact(int n )
{
    if(n=0 || n==1)
        return 1;
    else
        return fact(n-1)*n;


}
int iterative_fact(int n )
{
    int f=1;
    for(int i =0 ;i<=n;i++)
        f=f*i;
    return f;
    
}
int main()
{
    int r;
    r=iterative_fact(6);
    printf("d", r);


    return 0;
}