#include <stdio.h>

void depot(int x)
{
     int y;
     while(0<1){
	  
	  if(scanf("%d", &y)==EOF) return;     
     
	  if(y==0){
	       printf("%d\n", x);
	       return;
	  }
	  
	  else depot(y);
     }

     return;
}

int main(void)
{
     int x;

     scanf("%d", &x);
     
     depot(x);

     return 0;
}