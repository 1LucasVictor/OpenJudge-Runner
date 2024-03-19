#include <stdio.h>
int main(void){
  int N;
  int s;
  int o;
  scanf("%d",&N);
  s=N/2;
  o=N%2;
  if(o==1){
    s=s+1;
  }
  printf("%d\n",s);
  return 0;
}