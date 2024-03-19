#include<stdio.h>
int main(void){
 int h,n,a[n],sum;
  scanf("%d\n%d\n",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d\n",&a[i]);
    sum+=a[i];
  }
  if(sum<h){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}