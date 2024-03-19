#include<stdio.h>

int main() {
  int a, b, i, j;
  scanf("%d %d", &a, &b);
  for(i = 0;i <= a;i += 1){
  	for(j = 0;j <= a;j += 1){
      if(2*i + 4*j == b){
        printf("Yes\n");
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}