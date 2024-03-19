
#include <stdio.h>

void sort(int *a, int *b) {
  if (*a < *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
    return;
  } else {
    return;
  }
}

int GCD(int a, int b) {
  int j, i = 1;
  
  if (a == 1 || b == 1) {
    //printf("a = %d b = %d\n", a, b);
    return 1;
  }
  
  for (j = 2; j <= a; j++) {
    if (a % j == 0 && b % j == 0) {
      
      a /= j;
      b /= j;
      i *= j;
      
      //printf("j = %d i = %d a = %d b = %d\n", j, i, a, b);
      
      i *= GCD(a, b);
      
      break;
    }
  }
  
  return i;
}

int LCM(int a, int b, int c) {
  int i;
  
  if (a % b == 0) return a; 
  
  i = (a / c) * (b / c) * c;
  
  return i;
}

int main() {
  
  int a, b;
  int n, m;
  
  while (1) {
    if (scanf("%d %d", &a, &b) == EOF) break;
    
    
    sort(&a, &b);
    //printf("%d %d\n", a, b);
    
    n = GCD(a, b);
    
    m = LCM(a, b, n);
    
    //printf("n = %d, m = %ld\n", n, m);
    printf("%d %d\n", n, m);
  }
  return 0;
}