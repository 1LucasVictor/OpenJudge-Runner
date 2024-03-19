#include <stdio.h>
int main(void){
  int a,b,c,d,i=0;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  for(i=b;i<=c;++i){
    if(i%a==0){
      d=1;
    }
  }
  if(d==1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}
