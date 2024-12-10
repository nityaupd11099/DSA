#include<stdio.h>
#include <stdlib.h>
int func (int n)
{
 static int x =0; // static variables in recursion
 if(n>0)
 {
 x++;
 return func(n-1)+ x ;
 }
 return 0;

}
int main()
{
 int a = 5;
 printf("%d", func(a));
return 0; 
}