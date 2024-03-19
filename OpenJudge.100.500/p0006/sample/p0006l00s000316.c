#include<stdio.h>

int main(){
  int x=100000;
  double temp;
  int i,n;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    temp=(double)(x*1.05);
    temp=temp/1000;
    x=(int)(temp+0.9);
    x=x*1000;
  }
  printf("%d\n",x);
  return 0;
}