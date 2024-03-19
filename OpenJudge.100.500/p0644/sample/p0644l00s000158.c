#include<stdio.h>
int main(void){
  int masu;
  int count=0;
  scanf("%d",&masu);
  if((masu/100)%2==1) count++;
  if((masu/10)%2==1) count++;
  if(masu%2==1) count++;
     printf("%d\n",count);
     return 0;
}

