#include<stdio.h>
int main(void){
  int i=0,b=0;
  char n[4];
  scanf("%s",n);
  for(;i<3;i++)if(n[i]=='1')b++;
  printf("%d",b);
  return 0;
}