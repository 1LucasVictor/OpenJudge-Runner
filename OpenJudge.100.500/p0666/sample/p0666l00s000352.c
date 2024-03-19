#include <stdio.h>
#include <stdlib.h>
int main(void){
int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(b-c>=0){printf("delicious");}
  if(b-c<0&&a-abs(b-c)>=0){printf("safe");}
  if(b-c<0&&a-abs(b-c)<0){printf("dangerous");}
  
return 0;
}