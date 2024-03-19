#include <stdio.h>
int main(){
  int N,num;
  scanf("%d",&N);
  if(N%2==0) num=N/2;
  else num=N/2+1;
  printf("%d",num);
  return 0;
}