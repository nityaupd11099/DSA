#include <stdio.h>
#include<stdlib.h>
void indirectRecursion(int n)
{
    if(n>1)
    {
        printf("%d" , n );
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        printf("%d" , n );
        indirectRecursion(n/2);
    }
}
int main()
{
indirectRecursion(20);

    return 0;
}