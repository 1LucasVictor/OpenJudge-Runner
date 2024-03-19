#include<stdio.h>
main(){
  int A,H,i;
  scanf("%d %d",&H,&A);
  i=H/A;
  if(i*A<H)i++;
  printf("%d",i);
  return 0;
}