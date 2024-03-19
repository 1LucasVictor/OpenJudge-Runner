#include<stdio.h>

int mini(int a,int b){
  if(a>b) return b;
  return a;
}

int max(int a,int b){
  if(a>b) return a;
  return b;
}

int main(void){
  int a,b,c,d,start,end;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  start=max(a,c);
  end=mini(b,d);
  printf("%d\n",max(end-start,0));
  return 0;
}