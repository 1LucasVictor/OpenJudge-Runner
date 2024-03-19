#include<stdio.h>
int main(){
  int h,a,n=0;
  scanf("%d",&h);
  scanf("%d",&a);
  while(h>0){
    h-=a;
    n+=1;
  }
  printf("%d",n);
  return 0; 
}