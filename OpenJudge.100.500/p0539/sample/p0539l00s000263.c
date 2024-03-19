#include <stdio.h>

// min
int main(void){
  int n = 0;
  int a = 0, b = 0;
  
  scanf("%d", &n);

  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= 9; j++){
      if((i * j) == n){
	printf("Yes\n");
	return 0;
      }
    }
  }

  printf("No\n");
  
  return 0;

}
