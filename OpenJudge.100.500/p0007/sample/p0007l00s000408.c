#include <stdio.h>

int cil(int n)
{
     int a, b, c, d, i=0;

     for(a=0; a<=9; a++)
	  for(b=0; b<=9; b++)
	       for(c=0; c<=9; c++)
		    for(d=0; d<=9; d++)
		    {
			 if(a+b+c+d==n) i++;
		    }
     
     return i;
}

int main(void)
{
     int n;

     while(0<1){
	  if(scanf("%d", &n)==-1) break;
	  else{
	       printf("%d\n", cil(n));
	  }
     }

     return 0;
}