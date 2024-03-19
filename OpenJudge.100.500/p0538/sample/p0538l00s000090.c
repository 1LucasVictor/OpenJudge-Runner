#include <stdio.h>


int main(void){
  int a,b;
  int ans;

  scanf("%d",&a );
  scanf("%d",&b );

  if(a<=9&&b<=9){
    ans=a*b;
  }else{
    ans= -1;
  }

  printf("%d\n",ans );
  return 0;
}
