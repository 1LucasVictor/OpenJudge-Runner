#include <stdio.h>

int main(){
  int h,n,a;
  scanf("%d",&h);
  scanf("%d",&n);
  for(;n>0;n--){
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
