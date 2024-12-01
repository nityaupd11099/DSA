#include <stdio.h>
#include<stdlib.h>
double taylor_series(int x, int n )
{
    static double p =1, f =1;
    double r;
    if(n==0)
        return 1;
    else 
    {
        r=taylor_series(x , n-1);
        p=p*x;
        f=f*n;
        return r+ p/f;
    }

}
double taylor_series_horner(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return taylor_series_horner(x,n-1);

}
double taylor_series_horner_iterative(int x, int n)
{
 double s=1;
 int i;
 double num=1;
 double den=1;

 for(i=1;i<=n;i++)
 {
 num*=x;
 den*=i;
 s+=num/den;
 }
 return s;
}

int main()
{
double d=taylor_series(4, 10);
double c=taylor_series_horner(4,10);
printf("%lf" , d);
printf("%lf", c);
double b=taylor_series_horner_iterative(4,10);

printf("%lf" , b);


    return 0;
}