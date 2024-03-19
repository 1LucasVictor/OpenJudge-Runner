#include <stdio.h>

int main(void){

  int sum=100000,add=0,i,j;

  scanf("%d",&j);

  for(i=0;i<j;i++){
    sum*=1.05;
    if( (add=sum%1000)>0 ){
      sum-=add;
      sum+=1000;
    }
    
  }
  printf("%d\n",sum);

  return 0;
}