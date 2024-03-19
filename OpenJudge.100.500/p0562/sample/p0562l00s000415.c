#include<stdio.h>
int main(void){
  int a,b,x;
  scanf("%d %d",&a,&b);
  for(int i=0;i<20;i++){
    if(b<=(a*i)){
      x=i;
      break;
    }
  }
  printf("%d\n",x);
  return 0;
}