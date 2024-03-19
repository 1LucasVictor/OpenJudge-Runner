#include <stdio.h>
int digits(int x) {
   int count = 0;
   while(x>0) {
      x /= 10;
      count++;
   }
   return(count);
}
int main(void) {
   int a, b;
   int sum;
   while( scanf("%d %d", &a, &b) !=EOF) { 
      sum = a + b;
      printf("%d\n", digits(sum));
   }
   return (0);
}