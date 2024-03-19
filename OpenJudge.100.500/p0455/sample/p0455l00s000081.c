#include <stdio.h>

int main(void){
    int a, y;
    scanf("%d", &a);
    
  	if(0<a<11){
       	y = a + a*a + a*a*a;
    	printf("%d", y);
    }
  	else
      return 0;
}
