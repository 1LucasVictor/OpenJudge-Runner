#include <stdio.h>

int main(void){
  int a,b,c;

  scanf("%d %d",&a,&b);
  c=(a%2)*(b*2);
  if(c==1){
    printf("Odd\n");
  }
  else{
    printf("Even\n");
  }
  return 0;
}
