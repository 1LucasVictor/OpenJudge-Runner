#include<stdio.h>

int main(){
  int x=0,y=1,z,i,number;
  scanf("%d",&number);
  for(i=0;i<number;i++){
    z=x+y;
    x=y;
    y=z;
  }
  printf("%d\n",z);
  return 0;
}