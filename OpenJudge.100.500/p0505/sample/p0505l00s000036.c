#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int n,h,a;
  int sum=0;
  scanf("%d %d",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    sum+=a;
  }
  if(sum>=h){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
