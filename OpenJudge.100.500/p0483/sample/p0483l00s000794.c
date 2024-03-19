#include<stdio.h>
int main (void){
  int N,i,CHECK = 0;
  scanf("%d",&N);
  for(i=0;i<3;i++){
    if(N%10 == 7)
      CHECK = 1;
    N = N/10;
  }
  if(CHECK == 1)
    printf("Yes");
  else
    printf("No");
}
