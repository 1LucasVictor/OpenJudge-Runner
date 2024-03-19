#include<stdio.h>

int main(){
int H,A,a,b,c;
  scanf("%d %d",&H,&A);
  for(a=1;a<10001;a++){
  if(A*a>=H){
  printf("%d",a);
    break;
  }
  }
  return 0;
}