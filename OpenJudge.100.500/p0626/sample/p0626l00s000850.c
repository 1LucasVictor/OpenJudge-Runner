#include<stdio.h>

int main(){
  int D,N;
  int i,j,k;
  
  scanf("%d %d",&D,&N);
  
  if(D==0){
    
    if(N==100)
      printf("101\n");
    else
      printf("%d\n",N);
  }
  else if(D==1){
    
    if(N==100)
      printf("10100\n");
    else
      printf("%d\n",100*N);
  }
  
  else if(D==2){
    
    if(N==100)
      printf("1010000\n");
    else
      printf("%d\n",10000*N);
  }
  
  return 0;
}
