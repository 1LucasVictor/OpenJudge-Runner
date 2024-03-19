#include<stdio.h>

int main(void){
  int x;
  while(1){
  scanf("%d",&x);
    if(x>=-40&&x<=40)break;
  }
  if(x>=30){
printf("Yes");
}
  else{
printf("No");
}
return 0;
}