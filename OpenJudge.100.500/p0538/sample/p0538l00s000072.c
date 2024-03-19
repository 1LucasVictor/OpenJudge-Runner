#include <stdio.h>

int main(){
  int i,j;
  scanf("%d %d",&i,&j);
  if(i>9 || j>9 ) printf("-1\n");
  else printf("%d\n",i*j);
  return 0;
}