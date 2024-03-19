#include<stdio.h>


int main(void){

  int i, j, n;
  long long int max, sum;
  int x[5000];

  while(1){
    scanf("%d", &n);
    if(n==0) break;

    for(i=0; i<n; i++){
      scanf("%d", &x[i]);
    }
    max=x[0];  

    for(i=0; i<n; i++){
      if(max<x[i]) max=x[i];
      sum=x[i];
      for(j=i+1; j<n; j++){
	sum+=x[j];
	if(max<sum) max=sum;
      }
    }
    printf("%lld\n", max);
  }

  return(0);
}

