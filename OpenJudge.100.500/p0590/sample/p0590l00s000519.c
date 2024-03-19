#include <stdio.h>

int main(void){
  int len[6],i;
  for(i=0;i<6;i++)
    scanf("%d",&len[i]);
  if(len[4]-len[0] <= len[5])
    puts("Yay!");
  else
    puts(":(");
  return 0;
}