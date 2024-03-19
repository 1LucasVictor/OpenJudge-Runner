#include <stdio.h>

int main(void){
  long a,b;

  scanf("%ld%ld",&a,&b);

  if(a%2 == 0 || b%2 == 0){
    printf("Even\n");
  }else{
    printf("Odd\n");
  }

  return 0;
}