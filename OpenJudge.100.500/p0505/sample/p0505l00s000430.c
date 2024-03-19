#include <stdio.h>
#include <string.h>
int main(void){
  long int h;
  int n;
  scanf("%ld %d",&h,&n);
  int sum=0;
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  if(h>sum){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}