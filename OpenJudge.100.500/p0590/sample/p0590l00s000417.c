#include <stdio.h>

int main(){
  int x[7];
  for(int i=0;i<6;i++)
    scanf("%d",x+i);
  if(x[4]-x[0]<=x[5]) printf("Yay!\n");
  else printf(":(\n");
  return 0;
}