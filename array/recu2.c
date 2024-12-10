#include <stdio.h>
#include<stdlib.h>
void fun(int n){
    if (n>0)
    {
        fun(n-1);
        printf("%d" , n); //firstly execute then prints this
    }
}
int main()
{
int x=4;
fun(x);


    return 0;
}