#include<stdio.h>
 
int main() {
  int a;
  int b;
  int t;
  int result;
  
  scanf("%d %d %d", &a, &b, &t);
  
  result = (int)(((float)t + 0.5) / (float)a) * b;
  printf("%d", result);
}