#include <stdio.h>
int main(void){
  
  int a,b,c,d,e,k;
  
  0<=a<b<c<d<e<=123;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
  
  if(e-a<=k){
    printf("Yay!");}
  else if(e-a>k){
    printf(":(");}
  
  
  
  
  
  
  return 0;
}