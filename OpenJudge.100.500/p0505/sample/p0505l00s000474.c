#include <stdio.h>

int main(){
  int h, n;
  scanf("%d %d",&h,&n);
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  
  if(sum<h){
    printf("No\n");
  }else{
    printf("Yes\n");
  }  
  return 0;
}
