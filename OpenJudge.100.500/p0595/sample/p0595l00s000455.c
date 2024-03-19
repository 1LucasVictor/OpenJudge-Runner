#include <stdio.h>

int main(){
	int A,B,K;
  	int i,sum=0;
  	int wari[150]={0};
  
  scanf("%d %d %d",&A,&B,&K);
  
  for(i=1;i<=100;i++){
  	if(A%i == 0 && B%i ==0) wari[i]=1;
    else;
    //printf("wari[%d]%d ",i,wari[i]);
  }
  
  
  for(i=1;i<=100;i++){
  	sum+=wari[i];
    if(sum==K) break;
    else;
  }
  
  printf("%d",i);
}