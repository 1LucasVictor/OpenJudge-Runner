#include <stdio.h>
 
int main(void){
  int i,num,temp,min,max,sum=0;
 
  scanf("%d",&num);
  scanf("%d",&temp);
  min=temp;  max=temp;
  sum+=temp;
 
  for(i=1;i<num;i++){
    scanf("%d",&temp);
    if(min>temp)  min=temp;
    else if(max<temp)  max=temp;
    sum+=temp;
  }
  printf("%d %d %d\n",min,max,sum);

  return 0;
}