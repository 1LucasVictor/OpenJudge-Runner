#include <stdio.h>

int main() {
	int x, i, c=0;
  	scanf("%d", &x);
    for (i = 0; i < 3; i++){
 		if (x % 10 != 0){
      		c = c + 1;
      		x = (x - 1)/10;
    	}
      	else x = x/10;
    }  
  	printf("%d", c);
	return 0;
}