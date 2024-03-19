#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,a;
    scanf ("%lf",&n);
    scanf ("%lf",&a);
    m=floor(n*a);
    if (n==0 && m==0){}
    else{printf ("%.0lf\n",m);}

}
