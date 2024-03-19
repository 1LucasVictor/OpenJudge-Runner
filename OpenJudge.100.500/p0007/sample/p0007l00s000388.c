#include<stdio.h>

int main(){
  int i, j, k, l, x, sum;


  while(scanf("%d",&x) != EOF){
    sum = 0;

    for(i = 0; i < 10; i++){
      for(j = 0; j < 10; j++){
	for(k = 0; k < 10; k++){
	  for(l = 0; l < 10; l++){
	    if(i + j + k + l == x){
	      sum += 1;
	    }
	  }
	}
      }
    }
    printf("%d\n",sum);
  }
  return 0;
}