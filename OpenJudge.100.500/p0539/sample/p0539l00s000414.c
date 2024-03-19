#include <stdio.h>

int main()
{
  int n, i, x;
 
  	if(scanf("%d", &n)== 1);
 
  if (n <= 81)  {
  	for( i=1; i<=9; ++i ){
  		if( n%i ==0 ){
          if(n/i < 9){
    	 	++x;
          }else{
            if(i ^ 2 == n){
              ++x;
            }
          }
  		}
  	}
  }
  
    if(x > 1){
      printf("Yes");
    }else{
      printf("No");
    }
  return 0;
}