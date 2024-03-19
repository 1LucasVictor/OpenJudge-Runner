#include<stdio.h>
int main() {
  int sp = 0, a, data[11] = {0};
  while(scanf("%d", &a) != EOF) {
    if(a == 0) {
      printf("%d\n", data[sp]);
      sp--;
    }else {
      sp++;
      data[sp] = a;
    }
  }
  return 0;  
}