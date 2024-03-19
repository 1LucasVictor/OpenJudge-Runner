#include<stdio.h>

int main() {
  int n;
  int i, j;
  scanf("%d", &n);
  
  for(i = 1; i < 10; i++) {
	for(j = 1; j < 10; j++) {
      if(i * j == n) {
        printf("Yes\n");
        return 0;
      }
    }
  }
  
  printf("No\n");
  
  return 0;
}