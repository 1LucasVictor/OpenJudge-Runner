#include<stdio.h>

int main(void){
  int h,n,i;
  int a[100008];
  scanf("%d %d\n",&h,&n );
  for(i=0; i<n; i++){
    scanf("%d",&a[i] );
    h -= a[i];
  }
  if(h > 0){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}
