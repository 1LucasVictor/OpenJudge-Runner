#include<stdio.h>
int main(){
  int pos[6],i,max;
  for(i=0;i<5;i++)
    scanf("%d",&pos[i]);
  scanf("%d",&max);
  if(pos[4]-pos[0]>max)
    printf(":(\n");
  else
    printf("Yay!\n");
  return 0;
}
