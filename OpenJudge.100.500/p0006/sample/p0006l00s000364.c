#include <stdio.h>
int main(){
  int a=100000,b=0;
  int i,j;
  scanf("%d",&i);
  for(j=0;j<i;j++){
    a=(a*0.05)+a;
    if(a%1000 != 0){
      a=a/1000;
      a+=1;
      a=a*1000;
    }
  }
  printf("%d\n",a);
  return (0);
}