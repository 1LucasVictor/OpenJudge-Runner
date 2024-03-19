#include<stdio.h>
int main(void){
  int hp,l,i;
  scanf("%d %d",&hp,&l);
  int at[l];
  for(i=0;i<l;i++){
    scanf("%d",&at[i]);
    hp-=at[i];
  }
  if(hp>0){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}