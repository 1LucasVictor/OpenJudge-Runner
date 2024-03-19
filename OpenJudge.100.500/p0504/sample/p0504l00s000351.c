#include<stdio.h>
 
int abc(int h,int a){
  int count = 0;
  while(h>0){
    h -= a;
    count++;
  }
  return count;
}
 
int main(void){
  int h,a,ans;
  scanf("%d %d",&h,&a);
  ans = abc(h,a);
  printf("%d",ans);
  return 0;
}
  