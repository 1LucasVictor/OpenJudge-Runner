#include<stdio.h>

int main(){
  int d,n,a;
  scanf("%d %d",&d,&n);
  if(d==0)a=n;
  if(d==1)a=n*100;
  if(d==2)a=n*10000;
  if(n==100){
    if(d==0)a += 1;
    if(d==1)a+=100;
    if(d==2)a+=10000;
  }
  printf("%d\n",a);
  return 0;
}