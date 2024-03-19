#include <stdio.h>

int main(void){

  int n, i;
  int a[100];
  int aa[100];
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
    aa[n - i - 1] = a[i];
  }

  for(i = 0; i < n; i++){
    printf("%d", aa[i]);
    if(n - i > 1){
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}