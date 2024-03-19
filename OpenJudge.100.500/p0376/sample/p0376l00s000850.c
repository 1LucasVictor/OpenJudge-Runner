#include <stdio.h>

int main(void){
  int n, i;
  scanf("%d", &n);
  int array[n];
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  for(i = (n - 1); 0 <= i; i--){
    if(i != (n - 1))
      printf(" ");
    printf("%d", array[i]);
  }
  printf("\n");
  return 0;
}