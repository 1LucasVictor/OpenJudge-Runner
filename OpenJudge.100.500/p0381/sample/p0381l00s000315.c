#include<stdio.h>

int main(){
  int n,x,C=0,i,j,k;

  while(1){

    scanf("%d %d",&n,&x);
    if(n==0 && x==0) break;

    for(i=1; i<=n; i++){

      for(j=1; j<=n; j++){

	for(k=1; k<=n; k++){

	  if(i + j + k == x){

	    if(i != j && j != k && k != i) C++;
	  }
	}
      }
    }
  
    printf("%d\n",C/6);
  }

  return 0;
}