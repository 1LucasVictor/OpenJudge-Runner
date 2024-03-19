#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define min(x, y) (x < y ? x : y)
#define ll long long int 
#define Lf  double

int main()
{

 Lf  A , B;
 scanf("%lf %lf",&A,&B);
  
 Lf prod = A*B; 
 printf("%.0lf",trunc(prod));
 /*
 ll a = trunc(prod);

 printf("%ld",a);
 */
  


  return 0;
}
