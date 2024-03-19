#include<stdio.h>

#define N 100000

int main(){
  int hp;
  int a;
  int b[N],i;
  if(scanf("%d%d",&hp,&a)!=2) return 1;
  
  for(i=0;i<a;i++){
  	if(scanf("%d",&b[i])!=1) return -1;
  }
  
  for(i=0;i<a;i++){
  	hp-=b[i];
  }
  
  if(hp<=0) printf("Yes");
  else printf("No");
return 0;
}