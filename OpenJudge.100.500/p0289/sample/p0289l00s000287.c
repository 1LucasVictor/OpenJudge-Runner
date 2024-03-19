#include <stdio.h>

int main(void){

  int a,b,tmp;

  scanf("%d %d",&a,&b);

  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }

  while((tmp = a % b) != 0){
    a = b;
    b = tmp;
  }   

    printf("%d\n",b);
 
  return 0;
}