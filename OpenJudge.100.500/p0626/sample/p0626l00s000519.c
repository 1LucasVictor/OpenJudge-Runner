#include<stdio.h>
#include<math.h>
int main(){
  int D,N;
  scanf("%d %d",&D,&N);
  printf("%d\n",(int)pow(100,D) * N);
  return 0;
}