#include <stdio.h>

int main() {
  	int h, a;
	scanf("%d%d", &h, &a);
  	int count = 0;
  	while(h>0) {
    	h -= a;
      	count++;
    }
  
  printf("%d", count);
  
  return 0;
}