#include <stdio.h>

int main(void){
  int N,a;
  
  a=scanf("%d",&N);
  
  if(a!=1){
    printf("正しく入力されていません\n");
  }
  
  if(N%2==0){
    printf("%d\n",N/2);
  }
  else{
    printf("%d\n",N/2+1);
  }
return 0;
}
  