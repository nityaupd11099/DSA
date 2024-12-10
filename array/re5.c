#include <stdio.h>
#include<stdlib.h>
void fun(){
static int x=10;
   x++;
   printf("%d", x);
   if(x==11)
   fun(x);


}
int main()
{
fun();


    return 0;
}