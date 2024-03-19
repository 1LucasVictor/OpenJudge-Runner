#include <stdio.h>
int main(void){
    int a,b,c,n;
    int count_n = 0;
    scanf("%d %d %d", &a, &b, &c);
    for(n = a; n <= b; n++) {
  if(c % n == 0) {
    count_n += 1;
  }
}
  printf("%d\n", count_n);  
  
  return 0;
}

