#include <stdio.h>
int main(){

  int n, x, i, j, k, count=0, total;

  while(1){
    scanf("%d %d", &n, &x);
    
    count=0;
    
    if(n == 0 && x == 0)break;
    
    for(i = 1; i <= n; i++){
      for(j = i + 1; j <= n; j++){
	for(k = j + 1; k <= n; k++){
	  total = i + j + k;
	  if(x == total){
	    count++;
	  }
	}
      }
    }
    printf("%d\n", count);
  }

  return 0;
}