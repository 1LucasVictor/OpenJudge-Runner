#include<stdio.h>
int main(void){
  int N;
  int i;
  int j=-1;
  scanf("%d",&N);
  for(i=1;i<=9;i++){
    if(N % i == 0){
      if(1<=N/i && N/i<=9){
        j=0;
        break;
      }
    }
  }
  if(j==0)
    printf("Yes");
  else
    printf("No");
  return 0;
}