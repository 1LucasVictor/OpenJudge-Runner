#include<stdio.h>
 
int main (void)
{ 
  int i, j, k, x, n, ans = 0;
  
  while(1){
  	scanf("%d %d",&n, &x);
  	if(n == 0 && x == 0) break;
  	for(i = 1; i <= n; i++){
  		for(j = 1; j <= n; j++){
  			for(k = 1; k <= n; k++){
  				if(i + j + k == x && i != j && j != k && k != i){
  					ans += 1;
  				}
  			}
  		}
  	}
  	  	printf("%d\n", ans / 6);
  	  	ans = 0;
  }

  			
  return 0;
}