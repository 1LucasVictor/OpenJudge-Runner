#include <stdio.h>
 
int main() {
  int N;
  int result = 0;
  scanf("%d",&N);
  result += N/2;
  result += N%2;
  printf("%d",result);
  return 0;
}