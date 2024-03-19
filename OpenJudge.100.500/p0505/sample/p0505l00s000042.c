#include<stdio.h>
int main(void){
  int h,n;
  scanf("%d %d",&h,&n);
  for(int loop=0;loop<n;loop++){
    int a;
    scanf("%d",&a);
    h-=a;
  }
  if(h<=0){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}