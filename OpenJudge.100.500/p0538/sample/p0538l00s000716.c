#include <stdio.h>

int main(){
  int a[2],f=1,i;
  for(i=0;i<2;i++){
    scanf("%d",&a[i]);
    if(a[i]>9) f=0;
  }
  if(f){
    printf("%d",a[0]*a[1]);
  }else{
    printf("-1");
  }
  return(0);
}