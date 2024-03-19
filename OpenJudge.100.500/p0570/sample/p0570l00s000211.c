#include<stdio.h>
int main (void){
  int a,b;
  scanf("%d%d",&a,&b);
  if((a+b)%2==0){
    printf("%d\n",(a+b)/2);
    return 0;
  }else{
    printf("IMPOSSIBLE\n");
    return 0;
  }
}
