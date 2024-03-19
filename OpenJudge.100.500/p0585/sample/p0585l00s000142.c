#include<stdio.h>

int main(void){

  int A,B,T;
  int ans=0;
  int i;

  scanf("%d %d %d",&A,&B,&T);

  for(i=1;i<T+1;i++){

    if(i%A==0)ans = ans + B;
    else{}
  }

  printf("%d\n",ans);

  return 0;

}
