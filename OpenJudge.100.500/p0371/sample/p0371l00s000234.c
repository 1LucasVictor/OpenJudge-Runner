#include <stdio.h>

int main(void){
  int i, a, kazu[10000], max=-1000000, min=1000000, sum=0;
  scanf("%d",&a);
  for(i=0 ; i<a ; i++){
    scanf("%d",&kazu[i]);
  }
  for(i=0 ; i<a ; i++){
    if(kazu[i]>max)
      max=kazu[i];
  }
  for(i=0 ; i<a ; i++){
    if(kazu[i]<min)
      min=kazu[i];
  }
  for(i=0 ; i<a ; i++){
    sum+=kazu[i];
  }
  printf("%d %d %d\n",min,max,sum);

return 0;
}