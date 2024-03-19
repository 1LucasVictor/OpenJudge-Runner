#include<stdio.h>

int main(){
  int N;
  int c=0;
  
  scanf("%d",&N);
  for(int i=0;i<3;i++){
    if(N%10==7){
      c=1;
      break;
    }
    N/=10;
  }
  
  if(c==0)
    printf("No\n");
  else
    printf("Yes\n");
  
  return 0;
}