#include <stdio.h>
int main(void){
  int i,n,yen=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    yen=yen+yen*0.05;
    yen=yen+999;
    yen=yen/1000;
    yen=yen*1000;
  }
  printf("%d\n",yen);
  return(0);
}