#include<stdio.h>

int main() {
	int a, b, i;
  scanf("%d %d", &a, &b);
  for(i = 0;i <= a;i += 1){
  	if(4*a - 2*i == b){
    	printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0; 
}