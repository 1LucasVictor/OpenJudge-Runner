#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int i, n[4], beg, fin, time;

  for(i=0;i<4;i++) scanf("%d",&n[i]);
  if(n[0]<n[2]) beg=n[2];
  else beg=n[0];
  if(n[1]<n[3]) fin=n[1];
  else fin=n[3];

  time = fin-beg;
  if(time<0) time=0;
  printf("%d\n",time);

  return 0;
} 
