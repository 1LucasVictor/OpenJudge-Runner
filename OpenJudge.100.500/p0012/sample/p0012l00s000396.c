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
}

int main(void)
{
     depot(0);		

     return 0;
}