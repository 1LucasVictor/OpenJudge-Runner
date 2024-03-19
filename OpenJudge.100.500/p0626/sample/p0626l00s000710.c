#include<stdio.h>
#include<math.h>
int main(){
  int D,N;
  scanf("%d %d",&D,&N);
  if(N!=100) printf("%d\n",(int)pow(100,D) * N);
  else printf("%d\n",(int)pow(100,D) * 101);
  return 0;
}