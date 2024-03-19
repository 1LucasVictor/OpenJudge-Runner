#include<stdio.h>

int main(){
  int a,b,c,d,e,k;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  if((b-a>k)||(c-b>k)||(d-c>k)||(e-d>k)){
    printf(":(");
  }
  else{
    printf("Yay!");
  }
  return 0;
}