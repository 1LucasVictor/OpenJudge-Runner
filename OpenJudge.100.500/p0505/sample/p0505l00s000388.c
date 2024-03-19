#include<stdio.h>
int main(void){
  int h,n,i,a[10];
  scanf("%d %d",&h,&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    h=h-a[i];
    if(h<=0){
      printf("Yes");
      return 0;
    }
  }
  printf("NO");
  return 0;
}