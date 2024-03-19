#include<stdio.h>
int main(void){
 int h,n,a[10000],sum=0;
  scanf("%d\n%d\n",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d\n",&a[i]);
  }
  for(int j=0;j<n;j++){
      sum=sum+a[j];
  }
  if(sum<h){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}