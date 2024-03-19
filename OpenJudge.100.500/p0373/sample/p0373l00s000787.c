#include <stdio.h>

int main(void){
  int i, j, n, m;
  int W[300], H[300];
  for(n=0 ; ; n++){
    scanf("%d %d",&H[n],&W[n]);
    if(H[n]==0 && W[n]==0){
      m=n;
      break;
    }
  }
  for(n=0 ; n<m ; n++){
    for(i=0 ; i<H[n] ; i++){
      for(j=0 ; j<W[n] ; j++){
	if(j==0 || j==W[n]-1 || i==0 ||i==H[n]-1){
	  printf("#");
	}else{
	  printf(".");
	}
      }
      printf("\n");
    }
    printf("\n");
  }
return 0;
}