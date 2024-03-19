#include<stdio.h>
int main(void){
  int a=0,b=0,x;
  while(a<3||20<a||b<2||20<b){
  	scanf("%d %d",&a,&b);
  }
  for(int i=0;i<20;i++){
    if(b<=(a*i)){
      x=i;
      break;
    }
  }
  printf("%d\n",x);
  return 0;
}