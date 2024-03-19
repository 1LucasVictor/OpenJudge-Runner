
#include <stdio.h>
#define NUMBER 10000
int main(void){
  int  i,num;
  int a[NUMBER];
  scanf("%d\n",&num);
  
  for(i=0;i<num;i++){
      scanf("%d ",&a[i]);
  }

  int min,max,sum;
  min=max=sum=a[0];
  for(i=1;i<num;i++){
      if(a[i]>max){
      max=a[i];}
      if(a[i]<min){
      min=a[i];}
      sum+=a[i];
  }
  printf("%d %d %d\n",min,max,sum);
  return 0;
}
