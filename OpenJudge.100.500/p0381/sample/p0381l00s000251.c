#include<stdio.h>

int main(){

  int n, x, i, j, k, count;

  while(i){
    count = 0;

    scanf("%d %d", &n, &x);
    if(n == 0 && x == 0)break;

    for(i = n; i >= 3 ; i--){
      for(j = i-1; j >= 2;j--){
	for(k = j-1; k >= 1;k--){
	  if((i + j + k) == x)
	    count++;
	  }
	}
      }
    printf("%d\n", count);
  }

  return 0;
}