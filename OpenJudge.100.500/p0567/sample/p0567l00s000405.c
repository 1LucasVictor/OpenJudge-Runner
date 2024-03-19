#include<stdio.h>

#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
 
  if(c-(a-b)>0){
  printf("%d",c-(a-b));
  }else{
  printf("%d",0);
  }
    return 0;
}
