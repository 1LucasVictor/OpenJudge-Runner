#include <stdio.h>
int main(){
  int x, b, sum, c, sum2;
  scanf("%d",&x);
  
 	sum = x / 500;
	c = x % 500;
	sum2 = c / 5;
  
      printf("%d\n",(sum * 1000) + (sum2 * 5));
 return 0;
}