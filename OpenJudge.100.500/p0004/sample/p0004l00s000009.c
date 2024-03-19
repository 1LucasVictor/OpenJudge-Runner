#include <stdio.h>

int gcd(int a, int b)
{
	  int r;
	  while((r = a % b)!=0) a = b, b = r;
	  
	  return b;
}

int lcm(int a, int b, int t)
{
     int u;

     a = a / t;
     b = b / t;
     u = a * b * t;
     
     return u;
}

int main(void)
{
     int a, b, t;
     
     while(0<1){
	  if(scanf("%d", &a) == -1) break;
	  scanf("%d", &b);

	  if(a<b){
	       t = a;
	       a = b;
	       b = t;
	  }

	  t = gcd(a, b);
	  
	  printf("%d %d\n", t, lcm(a, b, t));
     }

     return 0;
}