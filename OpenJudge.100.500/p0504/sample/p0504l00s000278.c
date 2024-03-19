#include<stdio.h>
#include<stdlib.h>
int main(){
  int h,a,ans;
  scanf("%d %d",&h,&a);
  if(h%a==0){
    printf("%d\n",h/a);
  }
  else{
    printf("%d\n",1+h/a);
  }
  return 0;
}