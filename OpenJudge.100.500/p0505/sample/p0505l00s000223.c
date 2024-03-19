#include<stdio.h>
#include<stdlib.h>
int main(){
  int h,n,a[2000000],total;
  scanf("%d %d",&h,&n);
  total=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    total=total+a[i];
  }
  if(total>=h){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}
