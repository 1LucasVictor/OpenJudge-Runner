#include <stdio.h>
int main(void){
  int a,b,c,d=0;
  scanf("%d %d",&a,&b);
  d=a+b;
  c=d/2;
  if(d%2==0){
    printf("%d\n",c);
  }else{
  printf("IMPOSSIBLE\n");
}
  return 0;
}
