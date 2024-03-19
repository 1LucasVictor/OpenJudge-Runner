#include <stdio.h>
int main(void){
  int A;
  int B;
  scanf("%d %d",&A,&B);
  int s=A-1;
  int i=B-1;
  int ans=(s+i-1)/s;
  printf("%d\n",ans);
}