#include<stdio.h>
int main(void){
  int h,n;
  scanf("%d %d",&h,&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int j=0;j<n;j++){
    h = h - a[j];
  }
  if(h <= 0)printf("Yes");
  else printf("No");
  return 0;
}