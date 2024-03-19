#include <stdio.h>
 
int main(void){
  int N, M, i, L, count=0;
  scanf("%d", &N);
  for(i=9;i>1;i--){
    M=N/i;
    L=N%i;
    if(M>9){
      printf("No");
      break;
    }else if(L!=0){
      count=count;
  	}else{
      count++;
    }
  }
  if(count>=1){
    printf("Yes");
  }
}