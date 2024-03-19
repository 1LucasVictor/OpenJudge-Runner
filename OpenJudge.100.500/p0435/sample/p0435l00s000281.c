#include <stdio.h>

int main(void){
  long int n = 0;
  long int d = 0;
  scanf("%ld", &n);
  scanf("%ld", &d);
  
  long int x = 0;
  long int y = 0;
  long int i = 0;
  long int q = 0;
  
  for(; i < n; i++){
    scanf("%ld", &x);
    scanf("%ld", &y);
    if(((x * x) + (y * y)) <= (d * d)){
      q++;
    }
  }
  
  printf("%ld", q);
  return 0;
}
