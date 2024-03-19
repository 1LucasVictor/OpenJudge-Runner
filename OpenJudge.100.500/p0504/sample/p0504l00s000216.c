#include<stdio.h>
int main(){
  int h,a;
  scanf("%d%d",&h,&a);
  if(h%a==0){
    printf("%d",h/a);
    return 0;
  }
  else
    printf("%d",(h/a)+1);
}
